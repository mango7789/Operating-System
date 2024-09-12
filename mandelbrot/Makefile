TLIB_PATH := ../thread-lib
CFLAGS := -O2 -fopenmp -I$(TLIB_PATH)

mandelbrot: mandelbrot.c
	gcc $(CFLAGS) -o $@ $^ -lm -lpthread

clean:
	rm -f mandelbrot *.jpg *.ppm
