#add_subdirectory(logger)
#add_subdirectory(utils)

add_executable(client ./utils/tcpClient.cc ./utils/ipAddressPort.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
add_executable(server ./utils/tcpServer.cc ./utils/ipAddressPort.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(server ${SERVER} ${LOGGER})
#add_executable(client ${CLIENT} ${LOGGER})