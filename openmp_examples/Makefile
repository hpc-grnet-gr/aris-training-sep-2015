
all: c_hello f_hello example

c_hello: hello.c
	gcc -fopenmp $< -o $@

f_hello: hello.f
	gfortran -fopenmp $< -o $@

example: example_calls.c
	gcc -fopenmp $< -o $@

mm: mm.cpp
	g++ -fopenmp $< -o $@

clean:
	rm -f c_hello f_hello example
