CC = gcc
CFLAGS = -Iinclude -Wall

SRC = src/main.c src/tbc16_ctr.c src/tbc16_ctr_utils.c src/tbc16_ctr_status.c

TARGET = tbc16_ctr.exe

all: data $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

data:
	mkdir data 2>nul || echo data ya existe

tree:
	tree /F >tree.txt

clean:
	del $(TARGET)

run: $(TARGET)
	$(TARGET)
