CC = gcc
CFLAGS = -Wall -Wextra -Iunity

SRC = main.c add.c
TEST_SRC = test_main.c add.c unity/unity.c

all: main test

# Build demo executable
main: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o main

# Build and link test executable
test: $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) -o test

clean:
	rm -f main test
