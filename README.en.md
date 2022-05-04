 **DSF-AYF** 
### introduce

{Distributed System Framework} based on Linux platform C++ written Distributed System Framework, the design concept of cluster + Distributed architecture + microservice mode, through Nginx load balancing to achieve multiple server clusters, Using one Loop per Thread + Thread pool mode, through the open source Libevent I/O framework library, the use of non-blocking IO model, based on event-driven and callback, native support for multi-core multithreading, achieve high concurrency in the network layer. Redis is used as the buffer layer between the server and the database to improve the running efficiency of the server.

### Software architecture

Mainly includes server, load balancing server, client, thread pool, database connection pool and so on **

### Install the tutorial

- The FROM ubuntu: 18.04
- MAINTAINER AYF

     **Build and build development tools** 

- RUN apt-get update --fix-missing && apt-get install -y fontconfig --fix-missing -y
- RUN apt-get install wget -y
- RUN apt-get install gcc -y 
- RUN apt-get install gdb -y
- RUN apt-get install g++ -y 
- RUN apt-get install make -y 
- RUN apt-get install vim -y 
- RUN apt-get install cmake -y
- RUN apt-get install git -y

      **mysql&redis middleware mysql-server redis-server ** 

- RUN apt-get install mysql-server -y
- RUN apt-get install redis -y

     **Libevent&redis &mysql headers and dynamic libraries**

- RUN apt-get install libmysqlclient-dev -y
- RUN apt-get install libevent-dev -y

     **Redis API and so** 

- The RUN wget HTTP: / / https://github.com/redis/hiredis/archive/refs/tags/v1.0.2.tar.gz
- RUN the tar - ZXVF v1.0.2. Tar. Gz

     **The RUN CD hiredis - 1.0.2** 

- RUN make
- RUN make install


### The use of the technical


- Linux socket programming, encapsulation TcpServer, TcpClient
- Encapsulate terminal logs and file logs
- Use of Libevent Network framework library
- The server-side thread pool model is created using metrics
- MySQL database C interface C C++ class encapsulation
- Buffer layer redis encapsulation
- Database connection pool (incomplete)
- The singleton pattern
- Load balancer + Consistent Hash algorithm (incomplete)
- Message encapsulation in CJson format
- The MVC design pattern deals with specific businesses
- cmake
- Docker image packaging


### In the late idea


- Add load balancers between the service layer and the data layer/cache layer to use the consistent hash algorithm for clustering
- Implement different load algorithms to deal with different load scenarios
- The number of thread pools and connection pools is different in different scenarios
- Configure multiple servers in cluster + distributed mode using load balancing
- The business layer separates different business functions into a distributed model of microservice cluster + service registration and discovery center.
- Use the Docker container configuration to package projects as images to achieve cross-platform
