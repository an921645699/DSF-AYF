
#add_executable(client ./utils/tcpClient.cc ./utils/ipAddressPort.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(server ./utils/tcpServer.cc ./utils/ipAddressPort.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(thread ./reactor/reactor.cc ./thread/thread.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(threadPool ./threadPool/threadPool.cc ./thread/thread.cc ./reactor/reactor.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(reactor ./reactor/reactor.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(controller ./controller/controller.cc ./view/view.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(view ./view/view.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(server ./mainServer/mainServer.cc ./reactor/reactor.cc ./threadPool/threadPool.cc ./thread/thread.cc ./utils/ipAddressPort.cc ./utils/tcpServer.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#add_executable(mysql ./mysql/mysql.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
add_executable(redis ./redis/redis.cc ./logger/logger.cc ./logger/message.cc ./logger/timeStamp.cc)
#target_link_libraries(thread pthread event)
#target_link_libraries(threadPool pthread event)
#target_link_libraries(reactor event)
#target_link_libraries(server pthread event)
#target_link_libraries(mysql mysqlclient)
target_link_libraries(redis hiredis)



#add_subdirectory(logger)
#add_subdirectory(utils)
#add_executable(server ${SERVER} ${LOGGER})
#add_executable(client ${CLIENT} ${LOGGER})