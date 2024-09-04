all: mem-model

TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

mem-model: mem-model.c
	gcc $(CFLAGS) -o $@ $< -lpthread

clean:
	rm -f mem-model
