
add_executable(client ./utils/tcpClient.cc ./utils/ipAddressPort.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
add_executable(server ./utils/tcpServer.cc ./utils/ipAddressPort.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(thread ./thread/thread.cc ./reactor/reactor.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(threadPool ./threadPool/threadPool.cc ./reactor/reactor.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(reactor ./reactor/reactor.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#target_link_libraries(thread pthread)
#target_link_libraries(reactor event)


#add_subdirectory(logger)
#add_subdirectory(utils)
#add_executable(server ${SERVER} ${LOGGER})
#add_executable(client ${CLIENT} ${LOGGER})