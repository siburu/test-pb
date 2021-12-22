#!/usr/bin/env python

from scalar_pb2 import Scalar
from nest_pb2 import GlobalA, GlobalB
from enum_pb2 import Enum
from repeated_pb2 import Repeated

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

def make_repeated() -> Repeated:
  r = Repeated()
  s = r.scalars.add()
  s.s32 = -10
  s.s = "hello"
  s = r.scalars.add()
  s.u32 = 10
  s.s = "world"
  r.strings.append("HELLO")
  r.strings.append("WORLD")
  r.bzs.append(b"hello")
  r.bzs.append(b"world")
  r.enums_default.append(Enum.ZERO)
  r.enums_default.append(Enum.ONE)
  r.enums_default.append(Enum.TWO)
  r.enums_unpacked.append(Enum.ZERO)
  r.enums_unpacked.append(Enum.ONE)
  r.enums_unpacked.append(Enum.TWO)
  r.enums_packed.append(Enum.ZERO)
  r.enums_packed.append(Enum.ONE)
  r.enums_packed.append(Enum.TWO)
  r.u64s_default.append(0)
  r.u64s_default.append(1)
  r.u64s_default.append(150)
  r.u64s_unpacked.append(0)
  r.u64s_unpacked.append(1)
  r.u64s_unpacked.append(150)
  r.u64s_packed.append(0)
  r.u64s_packed.append(1)
  r.u64s_packed.append(150)
  r.f32s_default.append(0)
  r.f32s_default.append(1)
  r.f32s_default.append(150)
  r.f32s_unpacked.append(0)
  r.f32s_unpacked.append(1)
  r.f32s_unpacked.append(150)
  r.f32s_packed.append(0)
  r.f32s_packed.append(1)
  r.f32s_packed.append(150)
  r.sf64s_default.append(0)
  r.sf64s_default.append(-1)
  r.sf64s_default.append(-150)
  r.sf64s_unpacked.append(0)
  r.sf64s_unpacked.append(-1)
  r.sf64s_unpacked.append(-150)
  r.sf64s_packed.append(0)
  r.sf64s_packed.append(-1)
  r.sf64s_packed.append(-150)
  return r

if __name__ == '__main__':
  # Scalar: 15a4709d3f 1898f8ffffffffffffff01 30e807 38cf0f 4de8030000 6118fcffffffffffff 6801 720568656c6c6f 7a05776f726c64
  print('Scalar:', make_scalar().SerializeToString().hex())

  print('GlobalA:', make_global_a().SerializeToString().hex())
  print('GlobalB:', make_global_b().SerializeToString().hex())

  # Repeated: 0a093813720568656c6c6f 0a09280a7205776f726c64 120548454c4c4f 1205574f524c44 1a0568656c6c6f 1a05776f726c64 2203000102 2800 2801 2802 3203000102 3a0400019601 4000 4001 409601 4a0400019601 520c000000000100000096000000 5d00000000 5d01000000 5d96000000 620c000000000100000096000000 6a180000000000000000ffffffffffffffff6affffffffffffff 710000000000000000 71ffffffffffffffff 716affffffffffffff 7a180000000000000000ffffffffffffffff6affffffffffffff
  print('Repeated:', make_repeated().SerializeToString().hex())
