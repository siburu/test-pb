#!/usr/bin/env python

from scalar_pb2 import Scalar
from nest_pb2 import GlobalA, GlobalB

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

def make_global_a() -> GlobalA:
  ga = GlobalA()
  ga.na.s = "HELLO"
  ga.nb.s = "WORLD"
  return ga

def make_global_b() -> GlobalB:
  gb = GlobalB()
  gb.nb.s = "hello"
  gb.na.s = "world"
  return gb

if __name__ == '__main__':
  # Scalar = 15a4709d3f 1898f8ffffffffffffff01 30e807 38cf0f 4de8030000 6118fcffffffffffff 6801 720568656c6c6f 7a05776f726c64
  print('Scalar:', make_scalar().SerializeToString().hex())

  print('GlobalA:', make_global_a().SerializeToString().hex())
  print('GlobalB:', make_global_b().SerializeToString().hex())
