CC=gcc
CFLAGS=-Wall -g

TARGET=writer

# Source files
SRCS = writer.c

# Object files
OBJS = $(SRCS:.c=.o)

ifdef CROSS_COMPILE
    CC=$(CROSS_COMPILE)gcc
endif

all:$(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)


