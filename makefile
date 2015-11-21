SRC := polygon.cpp main.cpp
HEAD := polygon.h
OBJ := ${patsubst %.cpp, %.o, $(SRC)}
TARGET := polygon.out

CC := g++
CFLAG := -g -c

all: $(TARGET)

$(TARGET): $(OBJ) 
	$(CC) $^ -o $@

$(OBJ): %.o: %.cpp $(HEAD)
	$(CC) $< $(CFLAG) -o $@

clean:
	rm $(OBJ) $(TARGET)

.PHONY: all clean
