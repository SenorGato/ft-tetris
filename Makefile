#OBJS defines files to compile
OBJS = ft-tetris.cpp 
CC = g++
COMPILER_FLAGS = -g -Wall -Wextra -Wpedantic -std=c++17
LINKER_FLAGS =  
OBJ_NAME = ft-tetris 

all : $(OBJS) 
		$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
