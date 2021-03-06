GCC = g++
GXX = $(GCC)

STD = -std=c++11
FLAGS = -Wall
ifdef DEBUG
	FLAGS += -DDEBUG
endif

# SFML = -lsfml-graphics -lsfml-window -lsfml-system

COMPILE = $(GXX) $(STD) $(FLAGS)

SRC = src
OBJ = obj
BUILDS = bin
TESTS = tests

all: labo01 compile_tests

# cmake: CMakeLists.txt
# 	mkdir cmake && cd cmake && cmake .. && make

OBJECT =  $(OBJ)/color.o $(OBJ)/circle.o $(OBJ)/square.o $(OBJ)/triangle.o $(OBJ)/rectangle.o
# HEADERS = $(SRC)/color.h $(SRC)/circle.h $(SRC)/square.h $(SRC)/triangle.h $(SRC)/rectangle.h
# OBJECT = -Lobj
HEADERS = -Isrc

main: labo01

compile_tests: test_circle test_rectangle test_square test_triangle

clean: obj_dir
	rm -f $(OBJ)/*

documentation:
	mkdir -p doc && cd doc && mkdir -p doxy && doxygen Doxyfile && make -C doxy/latex && cp doxy/latex/refman.pdf doc.pdf

build_dir:
	mkdir -p $(BUILDS)

obj_dir:
	mkdir -p $(OBJ)

setup: build_dir obj_dir

color.o: setup $(SRC)/color.h $(SRC)/color.cpp
	$(COMPILE) -c $(SRC)/color.cpp -o $(OBJ)/color.o

circle.o: setup $(SRC)/circle.h $(SRC)/circle.cpp
	$(COMPILE) -c $(SRC)/circle.cpp -o $(OBJ)/circle.o

square.o: setup $(SRC)/square.h $(SRC)/square.cpp
	$(COMPILE) -c $(SRC)/square.cpp -o $(OBJ)/square.o

triangle.o: setup $(SRC)/triangle.h $(SRC)/triangle.cpp
	$(COMPILE) -c $(SRC)/triangle.cpp -o $(OBJ)/triangle.o

rectangle.o: setup $(SRC)/rectangle.h $(SRC)/rectangle.cpp
	$(COMPILE) -c $(SRC)/rectangle.cpp -o $(OBJ)/rectangle.o

labo01: setup color.o circle.o square.o triangle.o rectangle.o labo_01_comte_emmanuelle_gallay_david.cpp
	$(COMPILE) $(OBJECT) $(HEADERS) labo_01_comte_emmanuelle_gallay_david.cpp -o labo01

# labo01: setup geometry.o labo01.o
# 	$(COMPILE) $(SRC)/geometry.h $(OBJ)/geometry.o $(OBJ)/labo01.o -o $(BUILDS)/labo01

# # TESTS

test_circle: $(TESTS)/test_circle.cpp color.o circle.o
	$(COMPILE) $(SRC)/color.h $(SRC)/circle.h $(OBJ)/color.o $(OBJ)/circle.o $(TESTS)/test_circle.cpp -o $(BUILDS)/test_circle

test_rectangle: $(TESTS)/test_rectangle.cpp color.o rectangle.o
	$(COMPILE) $(SRC)/color.h $(SRC)/rectangle.h $(OBJ)/color.o $(OBJ)/rectangle.o $(TESTS)/test_rectangle.cpp -o $(BUILDS)/test_rectangle

test_square: $(TESTS)/test_square.cpp color.o square.o
	$(COMPILE) $(SRC)/color.h $(SRC)/square.h $(OBJ)/color.o $(OBJ)/square.o $(TESTS)/test_square.cpp -o $(BUILDS)/test_square

test_triangle: $(TESTS)/test_triangle.cpp color.o triangle.o
	$(COMPILE) $(SRC)/color.h $(SRC)/triangle.h $(OBJ)/color.o $(OBJ)/triangle.o $(TESTS)/test_triangle.cpp -o $(BUILDS)/test_triangle

# test_point_set: $(TESTS)/test_point_set.cpp geometry.o
# 	$(COMPILE) src/geometry.h $(OBJ)/geometry.o $(TESTS)/test_point_set.cpp -o $(BUILDS)/test_point_set
