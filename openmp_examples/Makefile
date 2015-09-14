

c_hello: hello.c
	gcc -fopenmp $< -o $@

f_hello: hello.f
	gfortran -fopenmp $< -o $@

example: example_calls.c
	gcc -fopenmp $< -o $@

all: c_hello f_hello example

clean:
	rm -f c_hello f_hello example
