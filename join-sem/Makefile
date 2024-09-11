all: join-1 join-2

TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

join-1: join-1.c main.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

join-2: join-2.c main.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

clean:
	rm -f join-1 join-2
