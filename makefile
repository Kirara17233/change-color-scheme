CC = g++

CFLAGS = -g -Wall

TARGET = scheme
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %cpp, %o, $(SRCS))
all : $(TARGET)
	rm *.o

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
