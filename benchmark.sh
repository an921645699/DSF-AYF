#! /bin/bash

for((i=0;i<4000;i++))
do
    nohup telnet 127.0.0.1 8000 &
    echo $i
done