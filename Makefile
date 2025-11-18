# Makefile for SFML Test
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

TARGET = sfml_test
SOURCE = main.cpp

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE) $(LDFLAGS)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
