TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

graph: graph.c
	gcc $(CFLAGS) -o $@ $^ -lpthread

clean:
	rm -f graph
