#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cassert>

#include "scalar.pb.h"
#include "nest.pb.h"

static void test_scalar();
static void test_nest();

int main()
{
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  test_scalar();
  test_nest();
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
