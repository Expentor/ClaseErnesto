CC = gcc
FILE = holasdl2.c
OUT = holamundo
LIBS = `pkg-config --libs sdl2 SDL2_ttf`
CFLAGS = `pkg-config --cflags sdl2 SDL2_ttf`

run: build
	./$(OUT)

build:
	$(CC) $(FILE) -o $(OUT) $(LIBS) $(CFLAGS)
