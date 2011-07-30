/* Write the function any(s1,s2), which returns the first location in a string
s1 where any character from the string s2 occurs, or -1 if s1 contains no 
characters from s2. */

#include <stdio.h>

int any(char s1[], char s2[])
{
	int i, j;
	int duplicate;
	int firstlocation = -1;
	
	for (i = 0; firstlocation == -1 && s1[i] != '0'; i++) {
		for (j = 0; firstlocation == -1 && s2[j] != '0'; j++) { 
			if (s1[i] == s2[j]){
				firstlocation = i;
			}
		}
	}
	return firstlocation;
}

int main()
{
	char tests1[] = "Economics";
	char tests2[] = "Finance";
	char tests3[] = "Math";
	
	printf("%s %s: %d\n", tests1, tests2, any(tests1, tests2));
	printf("%s %s: %d\n", tests1, tests3, any(tests1, tests3));
	
	return 0;
}