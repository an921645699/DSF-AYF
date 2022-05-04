 **DSF-AYF** 

### 介绍

{Distributed System Framework(分布式系统框架)} 基于Linux平台C++编写的分布式系统框架，设计理念采用集群＋分布式架构＋微服务模式，通过Nginx 负载均衡实现多个服务器集群，使用one loop per thread +thread pool模式，通过开源的libevent I/O框架库，采用非阻塞 IO 模型，基于事件驱动和回调，原生支持多核多线程，实现网络层达到高并发。使用redis做服务器与数据库之间的缓冲层，提高服务器的运行效率。

### 软件架构

主要包含服务端，负载均衡服务器，客户端，线程池，数据库连接池等** 

### 安装教程


- FROM ubuntu:18.04
- MAINTAINER AYF

     **编译构建开发工具** 

- RUN apt-get update --fix-missing && apt-get install -y fontconfig --fix-missing -y
- RUN apt-get install wget -y
- RUN apt-get install gcc -y
- RUN apt-get install gdb -y
- RUN apt-get install g++ -y
- RUN apt-get install make -y
- RUN apt-get install vim -y
- RUN apt-get install cmake -y
- RUN apt-get install git -y

     **mysql&redis的中间件 mysql-server redis-server** 

- RUN apt-get install mysql-server -y
- RUN apt-get install redis -y

     **libevent&redis&mysql的头文件以及动态库** 

- RUN apt-get install libmysqlclient-dev -y
- RUN apt-get install libevent-dev -y

     **redis的api和so** 

- RUN wget https://github.com/redis/hiredis/archive/refs/tags/v1.0.2.tar.gz
- RUN tar -zxvf v1.0.2.tar.gz
- RUN cd hiredis-1.0.2
- RUN make
- RUN make install


### 使用技术


- Linux下socket编程， 封装TcpServer，TcpClient
- 封装终端日志和文件日志
- Libevent网络框架库的使用
- 服务器端线程池模型的创建使用衡
- MySQL数据库C接口的C++类封装
- 缓冲层redis的封装
- 数据库连接池(未完成)
- 单例模式
- 负载均衡器+一致性Hash算法(未完成)
- CJson格式的消息封装
- MVC设计模式处理具体业务
- cmake
- docker镜像打包


### 后期想法


1. 业务层和数据层/缓存层之间增加负载均衡器使用一致性hash算法做集群模式
2. 实现不同的负载算法应对不同的负载场景
3. 实现线程池、连接池不同场景实现不同数量
4. 使用负载均衡配置多台服务器做到集群+分布式模式
5. 业务层将不同业务功能分离，做成微服务集群+服务注册和发现中心 的分布式模型。
6. 使用docker容器配置，将项目打包为镜像做到跨平台
