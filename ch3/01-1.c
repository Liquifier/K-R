#include <stdio.h>
#include <time.h>

/* binsearch:  find x in v[0] <= v[1] <= ... <= v[n-1] */ 
int binsearch(int x, int v[], int n) 
{ 
	int low, high, mid; 
 
	low = 0; 
	high = n - 1; 
	while (low <= high) { 
		mid = (low+high)/2; 
		if (x < v[mid]) 
			high = mid + 1; 
		else if (x > v[mid]) 
			low = mid + 1; 
		else    /* found match */ 
			return mid; 
	} 
	return -1;   /* no match */ 
}

int main()
{
	int n = 11;
	int v[n];
	v[0] = 0;
	v[1] = 5;
	v[2] = 10;
	v[3] = 15;
	v[4] = 20;
	v[5] = 25;
	v[6] = 30;
	v[7] = 35;
	v[8] = 40;
	v[9] = 45;
	v[10] = 50;
	int x = 45;
	
	clock_t start, end;
	double cpu_time_used;

	start = clock();
	
	printf("%d is in the %dth position on the sorted array v.\n", x, binsearch(x, v, n));

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("CPU time used: %f", cpu_time_used);
	
	return 0;
}