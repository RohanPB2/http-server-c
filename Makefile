CC = gcc
CFLAGS = -Iinclude  -Wall -Wextra

SRC = src/main.c src/socket.c src/client.c src/parser.c src/router.c src/logger.c src/file_handler.c src/mime.c

TARGET = server

all:
	$(CC) $(SRC) $(CFLAGS) -o $(TARGET)

clean:
	rm -f $(TARGET)
