all: philosophers

TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

philosophers: philosophers.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

clean:
	rm -f philosophers
