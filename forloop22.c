#include <omp.h>
#include <stdio.h>
#include <math.h>
#include<conio.h>
#define NUMBER 500000 
int main(int argc, char *argv[]) {  
int i, data[NUMBER];  
double result=0.0;  
double start = omp_get_wtime();
	for (i=0; i<NUMBER; i++)  {   
		data[i]=i*i;  }  
		#pragma omp parallel for  
	for (i=0; i<NUMBER; i++)  {   
		result+=(sin(data[i])-cos(data[i]))/(sin(data[i])+cos(data[i]));  }  
		printf("Parallel(native)//)Result = %f\n",result); 
		printf("Time: \t %f \n", omp_get_wtime()-start );
	getch();
}
