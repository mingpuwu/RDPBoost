# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: RDPBoost.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0eRDPBoost.proto\"a\n\x0cVideoMessage\x12\r\n\x05width\x18\x01 \x01(\r\x12\x0e\n\x06height\x18\x02 \x01(\r\x12\x12\n\nframe_rate\x18\x03 \x01(\r\x12\x10\n\x08\x62it_rate\x18\x04 \x01(\r\x12\x0c\n\x04\x64\x61ta\x18\x05 \x01(\x0c\"4\n\x0cMouseMessage\x12\t\n\x01x\x18\x01 \x01(\r\x12\t\n\x01y\x18\x02 \x01(\r\x12\x0e\n\x06\x62utton\x18\x03 \x01(\r\"r\n\x0c\x45ndPointInfo\x12(\n\x04type\x18\x01 \x01(\x0e\x32\x1a.EndPointInfo.EndPointType\x12\n\n\x02ID\x18\x02 \x01(\t\",\n\x0c\x45ndPointType\x12\r\n\tIS_CLIENT\x10\x00\x12\r\n\tIS_SERVER\x10\x01\"o\n\rStatusMessage\x12)\n\x06Status\x18\x01 \x01(\x0e\x32\x19.StatusMessage.StatusType\"3\n\nStatusType\x12\x11\n\rCLIENT_ONLINE\x10\x00\x12\x12\n\x0e\x43LIENT_OFFLINE\x10\x01\"\xb3\x02\n\x0cProtoMessage\x12$\n\x04type\x18\x01 \x01(\x0e\x32\x16.ProtoMessage.DataType\x12%\n\x0cVideMessageI\x18\x02 \x01(\x0b\x32\r.VideoMessageH\x00\x12&\n\rMouseMessageI\x18\x03 \x01(\x0b\x32\r.MouseMessageH\x00\x12&\n\rEndPointInfoI\x18\x04 \x01(\x0b\x32\r.EndPointInfoH\x00\x12(\n\x0eStatusMessageI\x18\x05 \x01(\x0b\x32\x0e.StatusMessageH\x00\"T\n\x08\x44\x61taType\x12\x11\n\rVIDEO_MESSAGE\x10\x00\x12\x11\n\rMOUSE_MESSAGE\x10\x01\x12\x11\n\rENDPOINT_INFO\x10\x02\x12\x0f\n\x0bSTATUS_INFO\x10\x03\x42\x06\n\x04\x64\x61tab\x06proto3')



_VIDEOMESSAGE = DESCRIPTOR.message_types_by_name['VideoMessage']
_MOUSEMESSAGE = DESCRIPTOR.message_types_by_name['MouseMessage']
_ENDPOINTINFO = DESCRIPTOR.message_types_by_name['EndPointInfo']
_STATUSMESSAGE = DESCRIPTOR.message_types_by_name['StatusMessage']
_PROTOMESSAGE = DESCRIPTOR.message_types_by_name['ProtoMessage']
_ENDPOINTINFO_ENDPOINTTYPE = _ENDPOINTINFO.enum_types_by_name['EndPointType']
_STATUSMESSAGE_STATUSTYPE = _STATUSMESSAGE.enum_types_by_name['StatusType']
_PROTOMESSAGE_DATATYPE = _PROTOMESSAGE.enum_types_by_name['DataType']
VideoMessage = _reflection.GeneratedProtocolMessageType('VideoMessage', (_message.Message,), {
  'DESCRIPTOR' : _VIDEOMESSAGE,
  '__module__' : 'RDPBoost_pb2'
  # @@protoc_insertion_point(class_scope:VideoMessage)
  })
_sym_db.RegisterMessage(VideoMessage)

MouseMessage = _reflection.GeneratedProtocolMessageType('MouseMessage', (_message.Message,), {
  'DESCRIPTOR' : _MOUSEMESSAGE,
  '__module__' : 'RDPBoost_pb2'
  # @@protoc_insertion_point(class_scope:MouseMessage)
  })
_sym_db.RegisterMessage(MouseMessage)

EndPointInfo = _reflection.GeneratedProtocolMessageType('EndPointInfo', (_message.Message,), {
  'DESCRIPTOR' : _ENDPOINTINFO,
  '__module__' : 'RDPBoost_pb2'
  # @@protoc_insertion_point(class_scope:EndPointInfo)
  })
_sym_db.RegisterMessage(EndPointInfo)

StatusMessage = _reflection.GeneratedProtocolMessageType('StatusMessage', (_message.Message,), {
  'DESCRIPTOR' : _STATUSMESSAGE,
  '__module__' : 'RDPBoost_pb2'
  # @@protoc_insertion_point(class_scope:StatusMessage)
  })
_sym_db.RegisterMessage(StatusMessage)

ProtoMessage = _reflection.GeneratedProtocolMessageType('ProtoMessage', (_message.Message,), {
  'DESCRIPTOR' : _PROTOMESSAGE,
  '__module__' : 'RDPBoost_pb2'
  # @@protoc_insertion_point(class_scope:ProtoMessage)
  })
_sym_db.RegisterMessage(ProtoMessage)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _VIDEOMESSAGE._serialized_start=18
  _VIDEOMESSAGE._serialized_end=115
  _MOUSEMESSAGE._serialized_start=117
  _MOUSEMESSAGE._serialized_end=169
  _ENDPOINTINFO._serialized_start=171
  _ENDPOINTINFO._serialized_end=285
  _ENDPOINTINFO_ENDPOINTTYPE._serialized_start=241
  _ENDPOINTINFO_ENDPOINTTYPE._serialized_end=285
  _STATUSMESSAGE._serialized_start=287
  _STATUSMESSAGE._serialized_end=398
  _STATUSMESSAGE_STATUSTYPE._serialized_start=347
  _STATUSMESSAGE_STATUSTYPE._serialized_end=398
  _PROTOMESSAGE._serialized_start=401
  _PROTOMESSAGE._serialized_end=708
  _PROTOMESSAGE_DATATYPE._serialized_start=616
  _PROTOMESSAGE_DATATYPE._serialized_end=700
# @@protoc_insertion_point(module_scope)
