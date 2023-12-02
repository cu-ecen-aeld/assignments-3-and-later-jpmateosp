CC=gcc
CFLAGS=-Wall

OBJ=writer.o
TARGET=writer

ifdef CROSS_COMPILE
    CC=$(CROSS_COMPILE)gcc
endif

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) $(OBJ)

.PHONY: all clean


