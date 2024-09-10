TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

fish: fish.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

clean:
	rm -f fish
