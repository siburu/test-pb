#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cassert>

#include "scalar.pb.h"

int main()
{
  GOOGLE_PROTOBUF_VERIFY_VERSION;
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
  for (size_t i = 0; i < size; i++) {
    std::cout << std::hex
              << std::setfill('0')
              << std::setw(2)
              << static_cast<unsigned int>(buf[i]);
  }
  std::cout << std::endl;
  delete[] buf;
  google::protobuf::ShutdownProtobufLibrary();
  return 0;
}
