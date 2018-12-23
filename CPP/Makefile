
# Build Directory
BUILD_DIR = build

#OBJS specifies which files to compile as part of the project
OBJS = src/main.cpp

#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -Iinclude

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -Llib
#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = $(BUILD_DIR)/Main

#This is the target that compiles our executable
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

# COMPILER_OPTIONS = -x c
# test : $(OBJS)
# 	$(CC) $(COMPILER_OPTIONS) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

run :
	@if [ -e "$(BUILD_DIR)/Main" ] ; \
    then \
	rm $(BUILD_DIR)/Main ; \
	make run; \
    else \
	make all; \
	./$(BUILD_DIR)/Main ; \
    fi ;

# objs :
# 	g++ -x c -o misc/main.o -c src/main.cpp
