CC      = cc
CFLAGS  = -O2 -Wall -Wextra -Wno-misleading-indentation
LDFLAGS = -lm
TARGET  = cube
SRC     = cube.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET)
