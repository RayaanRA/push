CC = gcc
CFLAGS = -Wall -std=c99 -Iinclude
LDFLAGS = -lraylib -lm -ldl -lpthread -lGL -lrt -lX11
SRC = $(wildcard src/*.c)
OUT = game

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $^ -o $(OUT) $(LDFLAGS)

clean:
	rm -f $(OUT)
