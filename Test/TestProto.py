import RDPBoost_pb2

data = b'123'

SendMessage = RDPBoost_pb2.ProtoMessage()
SendMessage.type =  RDPBoost_pb2.ProtoMessage.DataType.VIDEO_MESSAGE
SendMessage.VideMessageI.width = 1920
SendMessage.VideMessageI.height = 1080
SendMessage.VideMessageI.frame_rate = 30
SendMessage.VideMessageI.bit_rate = 4000000
SendMessage.VideMessageI.data = data
sendata = SendMessage.SerializeToString()

with open('savefile','wb') as fd:
    fd.write(sendata)