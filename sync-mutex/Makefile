TLIB_PATH := ../thread-lib
CFLAGS := -O2 -I$(TLIB_PATH)

sync: sync.c piano.h piano_key_1.wav
	gcc $(CFLAGS) -o $@ $< -lpthread

piano_key_1.wav:
	python3 gen-notes.py

clean:
	rm -f *.wav sync
