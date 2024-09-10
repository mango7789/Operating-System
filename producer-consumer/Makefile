all: pc-1 pc-2 pc-cv pc-cv-broadcast

TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

pc-1: pc-1.c main.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

pc-2: pc-2.c main.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

pc-cv: pc-cv.c main.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

pc-cv-broadcast: pc-cv-broadcast.c main.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

clean:
	rm -f pc-1 pc-2 pc-cv
