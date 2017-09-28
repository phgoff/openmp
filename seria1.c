#include <stdio.h>
#include <omp.h>
#include<conio.h>
int main(int argc, char *argv[])
{
int t_id=1;
	double start = omp_get_wtime();
	printf("Hello world from thread ID %d\n",t_id);
	printf("Time: %.20f\n",omp_get_wtime()-start);
	getch();
}
