#!/usr/bin/env python

from scalar_pb2 import Scalar

def make_scalar() -> Scalar:
  s = Scalar()
  s.f = 1.23
  s.i32 = -1000
  s.u64 = 1000
  s.s32 = -1000
  s.f32 = 1000
  s.sf64 = -1000
  s.s = "hello"
  s.b = True
  s.bz = b"world"
  return s

if __name__ == '__main__':
  s = make_scalar()
  b = s.SerializeToString()
  print(b.hex())
