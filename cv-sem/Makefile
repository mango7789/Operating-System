TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

cv: cv.c
	gcc $(CFLAGS) -o $@ $< -lpthread

clean:
	rm -f cv
