#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cassert>

#include "scalar.pb.h"
#include "nest.pb.h"
#include "enum.pb.h"
#include "repeated.pb.h"

static void test_scalar();
static void test_nest();
static void test_repeated();

int main()
{
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  test_scalar();
  test_nest();
  test_repeated();
  google::protobuf::ShutdownProtobufLibrary();
  return 0;
}

static void print_hex(unsigned char *buf, size_t len)
{
  for (size_t i = 0; i < len; i++) {
    std::cout << std::hex
              << std::setfill('0')
              << std::setw(2)
              << static_cast<unsigned int>(buf[i]);
  }
  std::cout << std::endl;
}

static void test_scalar()
{
  test::pb::Scalar scalar;
  scalar.set_u64(1000);    // 6
  scalar.set_f(1.23);      // 2
  scalar.set_i32(-1000);   // 3
  scalar.set_bz("world"); // 15
  scalar.set_s32(-1000);   // 7
  scalar.set_sf64(-1000);  // 12
  scalar.set_f32(1000);    // 9
  scalar.set_s("hello");   // 14
  scalar.set_b(true);      // 13
  size_t size = scalar.ByteSizeLong();
  unsigned char *buf = new unsigned char[size];
  bool result = scalar.SerializeToArray(buf, size);
  assert(result);
  std::cout << "Scalar: ";
  print_hex(buf, size);
  delete[] buf;
}

static void test_nest()
{
  using namespace test::pb;
  GlobalA ga;
  {
    GlobalA::NestedA *na = new GlobalA::NestedA;
    na->set_s("HELLO");
    ga.set_allocated_na(na);
  }
  {
    GlobalB::NestedB *nb = new GlobalB::NestedB;
    nb->set_s("WORLD");
    ga.set_allocated_nb(nb);
  }
  GlobalB gb;
  {
    GlobalB::NestedB *nb = new GlobalB::NestedB;
    nb->set_s("hello");
    gb.set_allocated_nb(nb);
  }
  {
    GlobalA::NestedA *na = new GlobalA::NestedA;
    na->set_s("world");
    gb.set_allocated_na(na);
  }
  size_t size = ga.ByteSizeLong();
  unsigned char *buf = new unsigned char[size];
  bool result = ga.SerializeToArray(buf, size);
  assert(result);
  std::cout << "GlobalA: ";
  print_hex(buf, size);
  delete[] buf;

  size = gb.ByteSizeLong();
  buf = new unsigned char[size];
  result = gb.SerializeToArray(buf, size);
  assert(result);
  std::cout << "GlobalB: ";
  print_hex(buf, size);
  delete[] buf;
}

static void test_repeated()
{
  using namespace test::pb;
  Repeated r;
  {
    Scalar *scalar = r.add_scalars();
    scalar->set_s32(-10);
    scalar->set_s("hello");
    scalar = r.add_scalars();
    scalar->set_u32(10);
    scalar->set_s("world");
  }
  {
    r.add_strings("HELLO");
    r.add_strings("WORLD");
  }
  {
    r.add_bzs("hello");
    r.add_bzs("world");
  }
  {
    r.add_enums_default(ZERO);
    r.add_enums_default(ONE);
    r.add_enums_default(TWO);
  }
  {
    r.add_enums_unpacked(ZERO);
    r.add_enums_unpacked(ONE);
    r.add_enums_unpacked(TWO);
  }
  {
    r.add_enums_packed(ZERO);
    r.add_enums_packed(ONE);
    r.add_enums_packed(TWO);
  }
  {
    r.add_u64s_default(0);
    r.add_u64s_default(1);
    r.add_u64s_default(150);
  }
  {
    r.add_u64s_unpacked(0);
    r.add_u64s_unpacked(1);
    r.add_u64s_unpacked(150);
  }
  {
    r.add_u64s_packed(0);
    r.add_u64s_packed(1);
    r.add_u64s_packed(150);
  }
  {
    r.add_f32s_default(0);
    r.add_f32s_default(1);
    r.add_f32s_default(150);
  }
  {
    r.add_f32s_unpacked(0);
    r.add_f32s_unpacked(1);
    r.add_f32s_unpacked(150);
  }
  {
    r.add_f32s_packed(0);
    r.add_f32s_packed(1);
    r.add_f32s_packed(150);
  }
  {
    r.add_sf64s_default(0);
    r.add_sf64s_default(-1);
    r.add_sf64s_default(-150);
  }
  {
    r.add_sf64s_unpacked(0);
    r.add_sf64s_unpacked(-1);
    r.add_sf64s_unpacked(-150);
  }
  {
    r.add_sf64s_packed(0);
    r.add_sf64s_packed(-1);
    r.add_sf64s_packed(-150);
  }
  size_t size = r.ByteSizeLong();
  unsigned char *buf = new unsigned char[size];
  bool result = r.SerializeToArray(buf, size);
  assert(result);
  std::cout << "Repeated: ";
  print_hex(buf, size);
  delete[] buf;
}
