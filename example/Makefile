#CFLAGS = -g -O0

.PHONY: clean test

all: myfunctions.o myfunctions_test

myfunctions_test: myfunctions.o

test: myfunctions_test
	./myfunctions_test

clean:
	rm -f *.o myfunctions_test
