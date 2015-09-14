all: c_hello f_hello

c_hello: hello.c
	mpicc  $< -o $@

f_hello: hello.f
	mpif90 $< -o $@

clean:
	rm -f c_hello f_hello
