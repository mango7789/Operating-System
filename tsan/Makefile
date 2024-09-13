TLIB_PATH := ../thread-lib
CFLAGS := -O2 -g -I$(TLIB_PATH) -fsanitize=thread

race: race.c Makefile
	gcc $(CFLAGS) -o $@ $< -lpthread

clean:
	rm -f race
