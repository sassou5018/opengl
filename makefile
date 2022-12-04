# the compiler: gcc for C program, define as g++ for C++
CC = gcc
CXX = g++
MINGW = x86_64-w64-mingw32-g++
# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall
LINKING = -lglut -lGL -lGLU
TARGET = *

all:
	$(CXX) $(CFLAGS) -o out $(TARGET).cpp $(LINKING)
	./out
	$(MINGW) $(CFLAGS) -o out.exe $(TARGET).cpp $(LINKING)

clean:
	$(RM) $(TARGET)

