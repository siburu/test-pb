// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: repeated.proto

#include "repeated.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace test {
namespace pb {
constexpr Repeated::Repeated(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : scalars_()
  , strings_()
  , bzs_()
  , enums_default_()
  , _enums_default_cached_byte_size_(0)
  , enums_unpacked_()
  , enums_packed_()
  , _enums_packed_cached_byte_size_(0)
  , u64s_default_()
  , _u64s_default_cached_byte_size_(0)
  , u64s_unpacked_()
  , u64s_packed_()
  , _u64s_packed_cached_byte_size_(0)
  , f32s_default_()
  , f32s_unpacked_()
  , f32s_packed_()
  , sf64s_default_()
  , sf64s_unpacked_()
  , sf64s_packed_(){}
struct RepeatedDefaultTypeInternal {
  constexpr RepeatedDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RepeatedDefaultTypeInternal() {}
  union {
    Repeated _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RepeatedDefaultTypeInternal _Repeated_default_instance_;
}  // namespace pb
}  // namespace test
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_repeated_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_repeated_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_repeated_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_repeated_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, scalars_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, strings_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, bzs_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, enums_default_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, enums_unpacked_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, enums_packed_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, u64s_default_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, u64s_unpacked_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, u64s_packed_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, f32s_default_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, f32s_unpacked_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, f32s_packed_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, sf64s_default_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, sf64s_unpacked_),
  PROTOBUF_FIELD_OFFSET(::test::pb::Repeated, sf64s_packed_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::test::pb::Repeated)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::test::pb::_Repeated_default_instance_),
};

const char descriptor_table_protodef_repeated_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016repeated.proto\022\007test.pb\032\014scalar.proto\032"
  "\nenum.proto\"\245\003\n\010Repeated\022 \n\007scalars\030\001 \003("
  "\0132\017.test.pb.Scalar\022\017\n\007strings\030\002 \003(\t\022\013\n\003b"
  "zs\030\003 \003(\014\022$\n\renums_default\030\004 \003(\0162\r.test.p"
  "b.Enum\022)\n\016enums_unpacked\030\005 \003(\0162\r.test.pb"
  ".EnumB\002\020\000\022\'\n\014enums_packed\030\006 \003(\0162\r.test.p"
  "b.EnumB\002\020\001\022\024\n\014u64s_default\030\007 \003(\004\022\031\n\ru64s"
  "_unpacked\030\010 \003(\004B\002\020\000\022\027\n\013u64s_packed\030\t \003(\004"
  "B\002\020\001\022\024\n\014f32s_default\030\n \003(\007\022\031\n\rf32s_unpac"
  "ked\030\013 \003(\007B\002\020\000\022\027\n\013f32s_packed\030\014 \003(\007B\002\020\001\022\025"
  "\n\rsf64s_default\030\r \003(\020\022\032\n\016sf64s_unpacked\030"
  "\016 \003(\020B\002\020\000\022\030\n\014sf64s_packed\030\017 \003(\020B\002\020\001b\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_repeated_2eproto_deps[2] = {
  &::descriptor_table_enum_2eproto,
  &::descriptor_table_scalar_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_repeated_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_repeated_2eproto = {
  false, false, 483, descriptor_table_protodef_repeated_2eproto, "repeated.proto", 
  &descriptor_table_repeated_2eproto_once, descriptor_table_repeated_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_repeated_2eproto::offsets,
  file_level_metadata_repeated_2eproto, file_level_enum_descriptors_repeated_2eproto, file_level_service_descriptors_repeated_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_repeated_2eproto_getter() {
  return &descriptor_table_repeated_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_repeated_2eproto(&descriptor_table_repeated_2eproto);
namespace test {
namespace pb {

// ===================================================================

class Repeated::_Internal {
 public:
};

void Repeated::clear_scalars() {
  scalars_.Clear();
}
Repeated::Repeated(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  scalars_(arena),
  strings_(arena),
  bzs_(arena),
  enums_default_(arena),
  enums_unpacked_(arena),
  enums_packed_(arena),
  u64s_default_(arena),
  u64s_unpacked_(arena),
  u64s_packed_(arena),
  f32s_default_(arena),
  f32s_unpacked_(arena),
  f32s_packed_(arena),
  sf64s_default_(arena),
  sf64s_unpacked_(arena),
  sf64s_packed_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:test.pb.Repeated)
}
Repeated::Repeated(const Repeated& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      scalars_(from.scalars_),
      strings_(from.strings_),
      bzs_(from.bzs_),
      enums_default_(from.enums_default_),
      enums_unpacked_(from.enums_unpacked_),
      enums_packed_(from.enums_packed_),
      u64s_default_(from.u64s_default_),
      u64s_unpacked_(from.u64s_unpacked_),
      u64s_packed_(from.u64s_packed_),
      f32s_default_(from.f32s_default_),
      f32s_unpacked_(from.f32s_unpacked_),
      f32s_packed_(from.f32s_packed_),
      sf64s_default_(from.sf64s_default_),
      sf64s_unpacked_(from.sf64s_unpacked_),
      sf64s_packed_(from.sf64s_packed_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:test.pb.Repeated)
}

inline void Repeated::SharedCtor() {
}

Repeated::~Repeated() {
  // @@protoc_insertion_point(destructor:test.pb.Repeated)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Repeated::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Repeated::ArenaDtor(void* object) {
  Repeated* _this = reinterpret_cast< Repeated* >(object);
  (void)_this;
}
void Repeated::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Repeated::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Repeated::Clear() {
// @@protoc_insertion_point(message_clear_start:test.pb.Repeated)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scalars_.Clear();
  strings_.Clear();
  bzs_.Clear();
  enums_default_.Clear();
  enums_unpacked_.Clear();
  enums_packed_.Clear();
  u64s_default_.Clear();
  u64s_unpacked_.Clear();
  u64s_packed_.Clear();
  f32s_default_.Clear();
  f32s_unpacked_.Clear();
  f32s_packed_.Clear();
  sf64s_default_.Clear();
  sf64s_unpacked_.Clear();
  sf64s_packed_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Repeated::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .test.pb.Scalar scalars = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_scalars(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string strings = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_strings();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "test.pb.Repeated.strings"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated bytes bzs = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_bzs();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .test.pb.Enum enums_default = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_enums_default(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_enums_default(static_cast<::test::pb::Enum>(val));
        } else goto handle_unusual;
        continue;
      // repeated .test.pb.Enum enums_unpacked = 5 [packed = false];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          ptr -= 1;
          do {
            ptr += 1;
            ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
            CHK_(ptr);
            _internal_add_enums_unpacked(static_cast<::test::pb::Enum>(val));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<40>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_enums_unpacked(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .test.pb.Enum enums_packed = 6 [packed = true];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_enums_packed(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_enums_packed(static_cast<::test::pb::Enum>(val));
        } else goto handle_unusual;
        continue;
      // repeated uint64 u64s_default = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt64Parser(_internal_mutable_u64s_default(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56) {
          _internal_add_u64s_default(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated uint64 u64s_unpacked = 8 [packed = false];
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_u64s_unpacked(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<64>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt64Parser(_internal_mutable_u64s_unpacked(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated uint64 u64s_packed = 9 [packed = true];
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt64Parser(_internal_mutable_u64s_packed(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72) {
          _internal_add_u64s_packed(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated fixed32 f32s_default = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFixed32Parser(_internal_mutable_f32s_default(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 85) {
          _internal_add_f32s_default(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr));
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // repeated fixed32 f32s_unpacked = 11 [packed = false];
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 93)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_f32s_unpacked(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr));
            ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<93>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFixed32Parser(_internal_mutable_f32s_unpacked(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated fixed32 f32s_packed = 12 [packed = true];
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFixed32Parser(_internal_mutable_f32s_packed(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 101) {
          _internal_add_f32s_packed(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint32>(ptr));
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint32);
        } else goto handle_unusual;
        continue;
      // repeated sfixed64 sf64s_default = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 106)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedSFixed64Parser(_internal_mutable_sf64s_default(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 105) {
          _internal_add_sf64s_default(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::int64>(ptr));
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::int64);
        } else goto handle_unusual;
        continue;
      // repeated sfixed64 sf64s_unpacked = 14 [packed = false];
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 113)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_sf64s_unpacked(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::int64>(ptr));
            ptr += sizeof(::PROTOBUF_NAMESPACE_ID::int64);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<113>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 114) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedSFixed64Parser(_internal_mutable_sf64s_unpacked(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated sfixed64 sf64s_packed = 15 [packed = true];
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 122)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedSFixed64Parser(_internal_mutable_sf64s_packed(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 121) {
          _internal_add_sf64s_packed(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::int64>(ptr));
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::int64);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Repeated::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:test.pb.Repeated)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .test.pb.Scalar scalars = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_scalars_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_scalars(i), target, stream);
  }

  // repeated string strings = 2;
  for (int i = 0, n = this->_internal_strings_size(); i < n; i++) {
    const auto& s = this->_internal_strings(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "test.pb.Repeated.strings");
    target = stream->WriteString(2, s, target);
  }

  // repeated bytes bzs = 3;
  for (int i = 0, n = this->_internal_bzs_size(); i < n; i++) {
    const auto& s = this->_internal_bzs(i);
    target = stream->WriteBytes(3, s, target);
  }

  // repeated .test.pb.Enum enums_default = 4;
  {
    int byte_size = _enums_default_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          4, enums_default_, byte_size, target);
    }
  }

  // repeated .test.pb.Enum enums_unpacked = 5 [packed = false];
  for (int i = 0, n = this->_internal_enums_unpacked_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
        5, this->_internal_enums_unpacked(i), target);
  }

  // repeated .test.pb.Enum enums_packed = 6 [packed = true];
  {
    int byte_size = _enums_packed_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          6, enums_packed_, byte_size, target);
    }
  }

  // repeated uint64 u64s_default = 7;
  {
    int byte_size = _u64s_default_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteUInt64Packed(
          7, _internal_u64s_default(), byte_size, target);
    }
  }

  // repeated uint64 u64s_unpacked = 8 [packed = false];
  for (int i = 0, n = this->_internal_u64s_unpacked_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(8, this->_internal_u64s_unpacked(i), target);
  }

  // repeated uint64 u64s_packed = 9 [packed = true];
  {
    int byte_size = _u64s_packed_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteUInt64Packed(
          9, _internal_u64s_packed(), byte_size, target);
    }
  }

  // repeated fixed32 f32s_default = 10;
  if (this->_internal_f32s_default_size() > 0) {
    target = stream->WriteFixedPacked(10, _internal_f32s_default(), target);
  }

  // repeated fixed32 f32s_unpacked = 11 [packed = false];
  for (int i = 0, n = this->_internal_f32s_unpacked_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed32ToArray(11, this->_internal_f32s_unpacked(i), target);
  }

  // repeated fixed32 f32s_packed = 12 [packed = true];
  if (this->_internal_f32s_packed_size() > 0) {
    target = stream->WriteFixedPacked(12, _internal_f32s_packed(), target);
  }

  // repeated sfixed64 sf64s_default = 13;
  if (this->_internal_sf64s_default_size() > 0) {
    target = stream->WriteFixedPacked(13, _internal_sf64s_default(), target);
  }

  // repeated sfixed64 sf64s_unpacked = 14 [packed = false];
  for (int i = 0, n = this->_internal_sf64s_unpacked_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSFixed64ToArray(14, this->_internal_sf64s_unpacked(i), target);
  }

  // repeated sfixed64 sf64s_packed = 15 [packed = true];
  if (this->_internal_sf64s_packed_size() > 0) {
    target = stream->WriteFixedPacked(15, _internal_sf64s_packed(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test.pb.Repeated)
  return target;
}

size_t Repeated::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test.pb.Repeated)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .test.pb.Scalar scalars = 1;
  total_size += 1UL * this->_internal_scalars_size();
  for (const auto& msg : this->scalars_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string strings = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(strings_.size());
  for (int i = 0, n = strings_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      strings_.Get(i));
  }

  // repeated bytes bzs = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(bzs_.size());
  for (int i = 0, n = bzs_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      bzs_.Get(i));
  }

  // repeated .test.pb.Enum enums_default = 4;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_enums_default_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_enums_default(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _enums_default_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated .test.pb.Enum enums_unpacked = 5 [packed = false];
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_enums_unpacked_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_enums_unpacked(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  // repeated .test.pb.Enum enums_packed = 6 [packed = true];
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_enums_packed_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_enums_packed(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _enums_packed_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated uint64 u64s_default = 7;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt64Size(this->u64s_default_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _u64s_default_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated uint64 u64s_unpacked = 8 [packed = false];
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt64Size(this->u64s_unpacked_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_u64s_unpacked_size());
    total_size += data_size;
  }

  // repeated uint64 u64s_packed = 9 [packed = true];
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt64Size(this->u64s_packed_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _u64s_packed_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated fixed32 f32s_default = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_f32s_default_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    total_size += data_size;
  }

  // repeated fixed32 f32s_unpacked = 11 [packed = false];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_f32s_unpacked_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_f32s_unpacked_size());
    total_size += data_size;
  }

  // repeated fixed32 f32s_packed = 12 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_f32s_packed_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    total_size += data_size;
  }

  // repeated sfixed64 sf64s_default = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_sf64s_default_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    total_size += data_size;
  }

  // repeated sfixed64 sf64s_unpacked = 14 [packed = false];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_sf64s_unpacked_size());
    size_t data_size = 8UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_sf64s_unpacked_size());
    total_size += data_size;
  }

  // repeated sfixed64 sf64s_packed = 15 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_sf64s_packed_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Repeated::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Repeated::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Repeated::GetClassData() const { return &_class_data_; }

void Repeated::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Repeated *>(to)->MergeFrom(
      static_cast<const Repeated &>(from));
}


void Repeated::MergeFrom(const Repeated& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test.pb.Repeated)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  scalars_.MergeFrom(from.scalars_);
  strings_.MergeFrom(from.strings_);
  bzs_.MergeFrom(from.bzs_);
  enums_default_.MergeFrom(from.enums_default_);
  enums_unpacked_.MergeFrom(from.enums_unpacked_);
  enums_packed_.MergeFrom(from.enums_packed_);
  u64s_default_.MergeFrom(from.u64s_default_);
  u64s_unpacked_.MergeFrom(from.u64s_unpacked_);
  u64s_packed_.MergeFrom(from.u64s_packed_);
  f32s_default_.MergeFrom(from.f32s_default_);
  f32s_unpacked_.MergeFrom(from.f32s_unpacked_);
  f32s_packed_.MergeFrom(from.f32s_packed_);
  sf64s_default_.MergeFrom(from.sf64s_default_);
  sf64s_unpacked_.MergeFrom(from.sf64s_unpacked_);
  sf64s_packed_.MergeFrom(from.sf64s_packed_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Repeated::CopyFrom(const Repeated& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.pb.Repeated)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Repeated::IsInitialized() const {
  return true;
}

void Repeated::InternalSwap(Repeated* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  scalars_.InternalSwap(&other->scalars_);
  strings_.InternalSwap(&other->strings_);
  bzs_.InternalSwap(&other->bzs_);
  enums_default_.InternalSwap(&other->enums_default_);
  enums_unpacked_.InternalSwap(&other->enums_unpacked_);
  enums_packed_.InternalSwap(&other->enums_packed_);
  u64s_default_.InternalSwap(&other->u64s_default_);
  u64s_unpacked_.InternalSwap(&other->u64s_unpacked_);
  u64s_packed_.InternalSwap(&other->u64s_packed_);
  f32s_default_.InternalSwap(&other->f32s_default_);
  f32s_unpacked_.InternalSwap(&other->f32s_unpacked_);
  f32s_packed_.InternalSwap(&other->f32s_packed_);
  sf64s_default_.InternalSwap(&other->sf64s_default_);
  sf64s_unpacked_.InternalSwap(&other->sf64s_unpacked_);
  sf64s_packed_.InternalSwap(&other->sf64s_packed_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Repeated::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_repeated_2eproto_getter, &descriptor_table_repeated_2eproto_once,
      file_level_metadata_repeated_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
}  // namespace test
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::test::pb::Repeated* Arena::CreateMaybeMessage< ::test::pb::Repeated >(Arena* arena) {
  return Arena::CreateMessageInternal< ::test::pb::Repeated >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
