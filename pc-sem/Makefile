TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

pc: pc.c
	gcc $(CFLAGS) -o $@ $< -lpthread

clean:
	rm -f pc
