#include <stdio.h>
#include <omp.h>

void main(int argc, char* argv[])
{
	double start = omp_get_wtime();
	if ( !omp_in_parallel() )
	{
		printf("Number of processors is: %d\n", omp_get_num_procs() );
		printf("Number of max threads is: %d\n", omp_get_max_threads() );
	}
	sleep(1);
	double end = omp_get_wtime();
	printf("start = %.16g\nend = %.16g\ndiff = %.16g\n",
               start, end, end-start );
}
