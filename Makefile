CC = gcc
CFLAGS = -Wall -Wextra -lm -std=c11 -O2

SRC = src/main.c src/tensor.c src/ops.c
OBJ = $(SRC:.c=.o)

TARGET = tiny_transformer

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)