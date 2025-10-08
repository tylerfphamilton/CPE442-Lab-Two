# compiler and linker options
CXX := g++				# C++ compiler
OUT := lab2		# final executable to run the program
SRC := display_img.cpp

OPENCV_CFLAGS := $(shell pkg-config --cflags opencv4)
OPENCV_LIBS   := $(shell pkg-config --libs opencv4)
CXXFLAGS := -Wall -Wextra -Werror -O2 $(OPENCV_CFLAGS)
LDFLAGS  := $(OPENCV_LIBS)

.PHONY: all clean

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

clean:
	rm -f $(OUT)
