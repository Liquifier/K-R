/* Write a version of the binary search function with only one test inside the
 * loop and measure the difference in run-time.
 */
 
#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n) 
{ 
	int low, high, mid; 
 
	low = 0; 
	high = n - 1; 
	mid = (low+high)/2;
	while (low <= high && (x != v[mid])) { 
		mid = (low+high)/2;
		if (x < v[mid])
			high = mid + 1;
		else
			low = mid  + 1;
	}
	if (x == v[mid])
		return mid;
	else
		return -1;
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