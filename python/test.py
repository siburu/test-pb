#!/usr/bin/env python

from scalar_pb2 import Scalar

def make_scalar() -> Scalar:
  s = Scalar()
  s.u64 = 1000    # 6
  s.f = 1.23      # 2
  s.i32 = -1000   # 3
  s.bz = b"world" # 15
  s.s32 = -1000   # 7
  s.sf64 = -1000  # 12
  s.f32 = 1000    # 9
  s.s = "hello"   # 14
  s.b = True      # 13
  return s

if __name__ == '__main__':
  s = make_scalar()
  b = s.SerializeToString()
  # b = 15a4709d3f 1898f8ffffffffffffff01 30e807 38cf0f 4de8030000 6118fcffffffffffff 6801 720568656c6c6f 7a05776f726c64
  print(b.hex())
