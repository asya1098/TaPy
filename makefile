# компилятор - g++, можете заменить его на любой другой, например clang++
CXX = g++
CXXFLAGS = -Wall -g
SRCS = tapy.cpp
TARGET = tapy

all:
	(CXX) $(SRCS) -o $(TARGET)