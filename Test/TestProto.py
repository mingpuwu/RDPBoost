import RDPBoost_pb2

data = b'123'

CSendMessage = RDPBoost_pb2.ProtoMessage()
CSendMessage.type =  RDPBoost_pb2.ProtoMessage.DataType.VIDEO_MESSAGE
CSendMessage.VideMessageI.width = 1920
CSendMessage.VideMessageI.height = 1080
CSendMessage.VideMessageI.frame_rate = 30
CSendMessage.VideMessageI.bit_rate = 4000000
CSendMessage.VideMessageI.data = data
sendata = CSendMessage.SerializeToString()

with open('savefile','wb') as fd:
    fd.write(sendata)