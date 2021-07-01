SRC = src/Sum.c src/Difference.c src/Product.c src/Division.c

TEST_FILE=src/TestComplex.c 
INC=inc
TEST=unity/unity.c
all:
	gcc -I $(INC) $(SRC) $(TEST_FILE) $(TEST) -o test.out
	./test.out
	
clean:
	rm test.out
