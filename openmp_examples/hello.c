#include <stdio.h>
#include <omp.h>

void main(int argc, char* argv[])
{
#pragma omp parallel
	{
		printf("Hello World! This is thread %d out of %d\n",
				omp_get_thread_num(),
				omp_get_num_threads()
		      );
	}
}
