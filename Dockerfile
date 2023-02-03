# Get the GCC preinstalled image from Docker Hub
FROM ubuntu/apache2:latest

# Disable Prompt During Packages Installation
RUN apt-get -y update && apt-get install -y &&\
	apt-get install -y --no-install-recommends vim &&\
	apt-get install -y --no-install-recommends nano &&\
	apt-get install -y --no-install-recommends openjdk-11-jdk ca-certificates-java &&\
    apt-get install -y --no-install-recommends ant &&\
	apt-get install -y --no-install-recommends build-essential

# Install the Clang compiler
#RUN apt-get -y install gcc

RUN ln -sf /usr/share/zoneinfo/Asia/Singapore /etc/localtime

RUN mkdir -p /home/projects

COPY ./source /home/projects

RUN cd /home/projects

WORKDIR /home/projects

# Use GCC to compile the Test.cpp source file
#RUN g++ -o Hello hello.cpp

#CMD ["./Hello"]
