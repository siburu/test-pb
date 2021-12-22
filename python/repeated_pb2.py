# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: repeated.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import scalar_pb2 as scalar__pb2
import enum_pb2 as enum__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='repeated.proto',
  package='test.pb',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x0erepeated.proto\x12\x07test.pb\x1a\x0cscalar.proto\x1a\nenum.proto\"\x8e\x02\n\x08Repeated\x12 \n\x07scalars\x18\x01 \x03(\x0b\x32\x0f.test.pb.Scalar\x12\x0f\n\x07strings\x18\x02 \x03(\t\x12\x0b\n\x03\x62zs\x18\x03 \x03(\x0c\x12$\n\renums_default\x18\x04 \x03(\x0e\x32\r.test.pb.Enum\x12)\n\x0e\x65nums_unpacked\x18\x05 \x03(\x0e\x32\r.test.pb.EnumB\x02\x10\x00\x12\'\n\x0c\x65nums_packed\x18\x06 \x03(\x0e\x32\r.test.pb.EnumB\x02\x10\x01\x12\x14\n\x0cu64s_default\x18\x07 \x03(\x04\x12\x19\n\ru64s_unpacked\x18\x08 \x03(\x04\x42\x02\x10\x00\x12\x17\n\x0bu64s_packed\x18\t \x03(\x04\x42\x02\x10\x01\x62\x06proto3'
  ,
  dependencies=[scalar__pb2.DESCRIPTOR,enum__pb2.DESCRIPTOR,])




_REPEATED = _descriptor.Descriptor(
  name='Repeated',
  full_name='test.pb.Repeated',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='scalars', full_name='test.pb.Repeated.scalars', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='strings', full_name='test.pb.Repeated.strings', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='bzs', full_name='test.pb.Repeated.bzs', index=2,
      number=3, type=12, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='enums_default', full_name='test.pb.Repeated.enums_default', index=3,
      number=4, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='enums_unpacked', full_name='test.pb.Repeated.enums_unpacked', index=4,
      number=5, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\000', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='enums_packed', full_name='test.pb.Repeated.enums_packed', index=5,
      number=6, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u64s_default', full_name='test.pb.Repeated.u64s_default', index=6,
      number=7, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u64s_unpacked', full_name='test.pb.Repeated.u64s_unpacked', index=7,
      number=8, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\000', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u64s_packed', full_name='test.pb.Repeated.u64s_packed', index=8,
      number=9, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=54,
  serialized_end=324,
)

_REPEATED.fields_by_name['scalars'].message_type = scalar__pb2._SCALAR
_REPEATED.fields_by_name['enums_default'].enum_type = enum__pb2._ENUM
_REPEATED.fields_by_name['enums_unpacked'].enum_type = enum__pb2._ENUM
_REPEATED.fields_by_name['enums_packed'].enum_type = enum__pb2._ENUM
DESCRIPTOR.message_types_by_name['Repeated'] = _REPEATED
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Repeated = _reflection.GeneratedProtocolMessageType('Repeated', (_message.Message,), {
  'DESCRIPTOR' : _REPEATED,
  '__module__' : 'repeated_pb2'
  # @@protoc_insertion_point(class_scope:test.pb.Repeated)
  })
_sym_db.RegisterMessage(Repeated)


_REPEATED.fields_by_name['enums_unpacked']._options = None
_REPEATED.fields_by_name['enums_packed']._options = None
_REPEATED.fields_by_name['u64s_unpacked']._options = None
_REPEATED.fields_by_name['u64s_packed']._options = None
# @@protoc_insertion_point(module_scope)