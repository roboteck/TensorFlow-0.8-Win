// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/device_attributes.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/framework/device_attributes.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

namespace {

const ::google::protobuf::Descriptor* DeviceAttributes_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DeviceAttributes_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* BusAdjacency_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/framework/device_attributes.proto");
  GOOGLE_CHECK(file != NULL);
  DeviceAttributes_descriptor_ = file->message_type(0);
  static const int DeviceAttributes_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, device_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, memory_limit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, bus_adjacency_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, incarnation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, physical_device_desc_),
  };
  DeviceAttributes_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DeviceAttributes_descriptor_,
      DeviceAttributes::default_instance_,
      DeviceAttributes_offsets_,
      -1,
      -1,
      -1,
      sizeof(DeviceAttributes),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceAttributes, _is_default_instance_));
  BusAdjacency_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DeviceAttributes_descriptor_, &DeviceAttributes::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto() {
  delete DeviceAttributes::default_instance_;
  delete DeviceAttributes_reflection_;
}

void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n1tensorflow/core/framework/device_attri"
    "butes.proto\022\ntensorflow\"\257\001\n\020DeviceAttrib"
    "utes\022\014\n\004name\030\001 \001(\t\022\023\n\013device_type\030\002 \001(\t\022"
    "\024\n\014memory_limit\030\004 \001(\003\022/\n\rbus_adjacency\030\005"
    " \001(\0162\030.tensorflow.BusAdjacency\022\023\n\013incarn"
    "ation\030\006 \001(\006\022\034\n\024physical_device_desc\030\007 \001("
    "\t*J\n\014BusAdjacency\022\t\n\005BUS_0\020\000\022\t\n\005BUS_1\020\001\022"
    "\013\n\007BUS_ANY\020\002\022\027\n\023BUS_NUM_ADJACENCIES\020\003B4\n"
    "\030org.tensorflow.frameworkB\026DeviceAttribu"
    "tesProtosP\001b\006proto3", 379);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/device_attributes.proto", &protobuf_RegisterTypes);
  DeviceAttributes::default_instance_ = new DeviceAttributes();
  DeviceAttributes::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto_;
const ::google::protobuf::EnumDescriptor* BusAdjacency_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BusAdjacency_descriptor_;
}
bool BusAdjacency_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DeviceAttributes::kNameFieldNumber;
const int DeviceAttributes::kDeviceTypeFieldNumber;
const int DeviceAttributes::kMemoryLimitFieldNumber;
const int DeviceAttributes::kBusAdjacencyFieldNumber;
const int DeviceAttributes::kIncarnationFieldNumber;
const int DeviceAttributes::kPhysicalDeviceDescFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DeviceAttributes::DeviceAttributes()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.DeviceAttributes)
}

void DeviceAttributes::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

DeviceAttributes::DeviceAttributes(const DeviceAttributes& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.DeviceAttributes)
}

void DeviceAttributes::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memory_limit_ = GOOGLE_LONGLONG(0);
  bus_adjacency_ = 0;
  incarnation_ = GOOGLE_ULONGLONG(0);
  physical_device_desc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

DeviceAttributes::~DeviceAttributes() {
  // @@protoc_insertion_point(destructor:tensorflow.DeviceAttributes)
  SharedDtor();
}

void DeviceAttributes::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  physical_device_desc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void DeviceAttributes::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DeviceAttributes::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DeviceAttributes_descriptor_;
}

const DeviceAttributes& DeviceAttributes::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto();
  return *default_instance_;
}

DeviceAttributes* DeviceAttributes::default_instance_ = NULL;

DeviceAttributes* DeviceAttributes::New(::google::protobuf::Arena* arena) const {
  DeviceAttributes* n = new DeviceAttributes;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DeviceAttributes::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.DeviceAttributes)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(DeviceAttributes, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<DeviceAttributes*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(memory_limit_, incarnation_);
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bus_adjacency_ = 0;
  physical_device_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool DeviceAttributes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.DeviceAttributes)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.DeviceAttributes.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_device_type;
        break;
      }

      // optional string device_type = 2;
      case 2: {
        if (tag == 18) {
         parse_device_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device_type().data(), this->device_type().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.DeviceAttributes.device_type"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_memory_limit;
        break;
      }

      // optional int64 memory_limit = 4;
      case 4: {
        if (tag == 32) {
         parse_memory_limit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &memory_limit_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_bus_adjacency;
        break;
      }

      // optional .tensorflow.BusAdjacency bus_adjacency = 5;
      case 5: {
        if (tag == 40) {
         parse_bus_adjacency:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_bus_adjacency(static_cast< ::tensorflow::BusAdjacency >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_incarnation;
        break;
      }

      // optional fixed64 incarnation = 6;
      case 6: {
        if (tag == 49) {
         parse_incarnation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &incarnation_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_physical_device_desc;
        break;
      }

      // optional string physical_device_desc = 7;
      case 7: {
        if (tag == 58) {
         parse_physical_device_desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_physical_device_desc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->physical_device_desc().data(), this->physical_device_desc().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.DeviceAttributes.physical_device_desc"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.DeviceAttributes)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.DeviceAttributes)
  return false;
#undef DO_
}

void DeviceAttributes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.DeviceAttributes)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.DeviceAttributes.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string device_type = 2;
  if (this->device_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_type().data(), this->device_type().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.DeviceAttributes.device_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->device_type(), output);
  }

  // optional int64 memory_limit = 4;
  if (this->memory_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->memory_limit(), output);
  }

  // optional .tensorflow.BusAdjacency bus_adjacency = 5;
  if (this->bus_adjacency() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->bus_adjacency(), output);
  }

  // optional fixed64 incarnation = 6;
  if (this->incarnation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(6, this->incarnation(), output);
  }

  // optional string physical_device_desc = 7;
  if (this->physical_device_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->physical_device_desc().data(), this->physical_device_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.DeviceAttributes.physical_device_desc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->physical_device_desc(), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.DeviceAttributes)
}

::google::protobuf::uint8* DeviceAttributes::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.DeviceAttributes)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.DeviceAttributes.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string device_type = 2;
  if (this->device_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_type().data(), this->device_type().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.DeviceAttributes.device_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->device_type(), target);
  }

  // optional int64 memory_limit = 4;
  if (this->memory_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->memory_limit(), target);
  }

  // optional .tensorflow.BusAdjacency bus_adjacency = 5;
  if (this->bus_adjacency() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->bus_adjacency(), target);
  }

  // optional fixed64 incarnation = 6;
  if (this->incarnation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(6, this->incarnation(), target);
  }

  // optional string physical_device_desc = 7;
  if (this->physical_device_desc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->physical_device_desc().data(), this->physical_device_desc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.DeviceAttributes.physical_device_desc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->physical_device_desc(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.DeviceAttributes)
  return target;
}

int DeviceAttributes::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.DeviceAttributes)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string device_type = 2;
  if (this->device_type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device_type());
  }

  // optional int64 memory_limit = 4;
  if (this->memory_limit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->memory_limit());
  }

  // optional .tensorflow.BusAdjacency bus_adjacency = 5;
  if (this->bus_adjacency() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->bus_adjacency());
  }

  // optional fixed64 incarnation = 6;
  if (this->incarnation() != 0) {
    total_size += 1 + 8;
  }

  // optional string physical_device_desc = 7;
  if (this->physical_device_desc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->physical_device_desc());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DeviceAttributes::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.DeviceAttributes)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const DeviceAttributes* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DeviceAttributes>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.DeviceAttributes)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.DeviceAttributes)
    MergeFrom(*source);
  }
}

void DeviceAttributes::MergeFrom(const DeviceAttributes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.DeviceAttributes)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.device_type().size() > 0) {

    device_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_type_);
  }
  if (from.memory_limit() != 0) {
    set_memory_limit(from.memory_limit());
  }
  if (from.bus_adjacency() != 0) {
    set_bus_adjacency(from.bus_adjacency());
  }
  if (from.incarnation() != 0) {
    set_incarnation(from.incarnation());
  }
  if (from.physical_device_desc().size() > 0) {

    physical_device_desc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.physical_device_desc_);
  }
}

void DeviceAttributes::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.DeviceAttributes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DeviceAttributes::CopyFrom(const DeviceAttributes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.DeviceAttributes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DeviceAttributes::IsInitialized() const {

  return true;
}

void DeviceAttributes::Swap(DeviceAttributes* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DeviceAttributes::InternalSwap(DeviceAttributes* other) {
  name_.Swap(&other->name_);
  device_type_.Swap(&other->device_type_);
  std::swap(memory_limit_, other->memory_limit_);
  std::swap(bus_adjacency_, other->bus_adjacency_);
  std::swap(incarnation_, other->incarnation_);
  physical_device_desc_.Swap(&other->physical_device_desc_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DeviceAttributes::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DeviceAttributes_descriptor_;
  metadata.reflection = DeviceAttributes_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DeviceAttributes

// optional string name = 1;
void DeviceAttributes::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DeviceAttributes::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceAttributes::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.name)
}
 void DeviceAttributes::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.DeviceAttributes.name)
}
 void DeviceAttributes::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.DeviceAttributes.name)
}
 ::std::string* DeviceAttributes::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.DeviceAttributes.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DeviceAttributes::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.DeviceAttributes.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceAttributes::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.DeviceAttributes.name)
}

// optional string device_type = 2;
void DeviceAttributes::clear_device_type() {
  device_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DeviceAttributes::device_type() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.device_type)
  return device_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceAttributes::set_device_type(const ::std::string& value) {
  
  device_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.device_type)
}
 void DeviceAttributes::set_device_type(const char* value) {
  
  device_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.DeviceAttributes.device_type)
}
 void DeviceAttributes::set_device_type(const char* value, size_t size) {
  
  device_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.DeviceAttributes.device_type)
}
 ::std::string* DeviceAttributes::mutable_device_type() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.DeviceAttributes.device_type)
  return device_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DeviceAttributes::release_device_type() {
  // @@protoc_insertion_point(field_release:tensorflow.DeviceAttributes.device_type)
  
  return device_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceAttributes::set_allocated_device_type(::std::string* device_type) {
  if (device_type != NULL) {
    
  } else {
    
  }
  device_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_type);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.DeviceAttributes.device_type)
}

// optional int64 memory_limit = 4;
void DeviceAttributes::clear_memory_limit() {
  memory_limit_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 DeviceAttributes::memory_limit() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.memory_limit)
  return memory_limit_;
}
 void DeviceAttributes::set_memory_limit(::google::protobuf::int64 value) {
  
  memory_limit_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.memory_limit)
}

// optional .tensorflow.BusAdjacency bus_adjacency = 5;
void DeviceAttributes::clear_bus_adjacency() {
  bus_adjacency_ = 0;
}
 ::tensorflow::BusAdjacency DeviceAttributes::bus_adjacency() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.bus_adjacency)
  return static_cast< ::tensorflow::BusAdjacency >(bus_adjacency_);
}
 void DeviceAttributes::set_bus_adjacency(::tensorflow::BusAdjacency value) {
  
  bus_adjacency_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.bus_adjacency)
}

// optional fixed64 incarnation = 6;
void DeviceAttributes::clear_incarnation() {
  incarnation_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 DeviceAttributes::incarnation() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.incarnation)
  return incarnation_;
}
 void DeviceAttributes::set_incarnation(::google::protobuf::uint64 value) {
  
  incarnation_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.incarnation)
}

// optional string physical_device_desc = 7;
void DeviceAttributes::clear_physical_device_desc() {
  physical_device_desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DeviceAttributes::physical_device_desc() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.physical_device_desc)
  return physical_device_desc_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceAttributes::set_physical_device_desc(const ::std::string& value) {
  
  physical_device_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.physical_device_desc)
}
 void DeviceAttributes::set_physical_device_desc(const char* value) {
  
  physical_device_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.DeviceAttributes.physical_device_desc)
}
 void DeviceAttributes::set_physical_device_desc(const char* value, size_t size) {
  
  physical_device_desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.DeviceAttributes.physical_device_desc)
}
 ::std::string* DeviceAttributes::mutable_physical_device_desc() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.DeviceAttributes.physical_device_desc)
  return physical_device_desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DeviceAttributes::release_physical_device_desc() {
  // @@protoc_insertion_point(field_release:tensorflow.DeviceAttributes.physical_device_desc)
  
  return physical_device_desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceAttributes::set_allocated_physical_device_desc(::std::string* physical_device_desc) {
  if (physical_device_desc != NULL) {
    
  } else {
    
  }
  physical_device_desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), physical_device_desc);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.DeviceAttributes.physical_device_desc)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
