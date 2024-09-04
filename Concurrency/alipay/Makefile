all: alipay

TLIB_PATH := ../thread-lib
CFLAGS := -O1 -g -I$(TLIB_PATH)

alipay: alipay.c
	gcc $(CFLAGS) -o $@ $< -lpthread

clean:
	rm -f alipay
