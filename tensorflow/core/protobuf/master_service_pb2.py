# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tensorflow/core/protobuf/master_service.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from tensorflow.core.protobuf import master_pb2 as tensorflow_dot_core_dot_protobuf_dot_master__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='tensorflow/core/protobuf/master_service.proto',
  package='tensorflow.grpc',
  syntax='proto3',
  serialized_pb=_b('\n-tensorflow/core/protobuf/master_service.proto\x12\x0ftensorflow.grpc\x1a%tensorflow/core/protobuf/master.proto2\xe0\x03\n\rMasterService\x12T\n\rCreateSession\x12 .tensorflow.CreateSessionRequest\x1a!.tensorflow.CreateSessionResponse\x12T\n\rExtendSession\x12 .tensorflow.ExtendSessionRequest\x1a!.tensorflow.ExtendSessionResponse\x12\x42\n\x07RunStep\x12\x1a.tensorflow.RunStepRequest\x1a\x1b.tensorflow.RunStepResponse\x12Q\n\x0c\x43loseSession\x12\x1f.tensorflow.CloseSessionRequest\x1a .tensorflow.CloseSessionResponse\x12N\n\x0bListDevices\x12\x1e.tensorflow.ListDevicesRequest\x1a\x1f.tensorflow.ListDevicesResponse\x12<\n\x05Reset\x12\x18.tensorflow.ResetRequest\x1a\x19.tensorflow.ResetResponseB3\n\x1aorg.tensorflow.distruntimeB\x13MasterServiceProtosP\x01\x62\x06proto3')
  ,
  dependencies=[tensorflow_dot_core_dot_protobuf_dot_master__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)





DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\032org.tensorflow.distruntimeB\023MasterServiceProtosP\001'))
# @@protoc_insertion_point(module_scope)
