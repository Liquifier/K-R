/* Write an alternative version of squeeze(s1,s2) that deletes each
character in s1 that matches any character in the string s2. */

#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
	char tests1[] = "herp";
	char tests2[] = "derp";
	
	/* printf("Squeezing %s from %s gives us: \n", tests1, tests2); */
	squeeze(tests1, tests2);
	printf("%s \n", tests1);
	
	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	int duplicate;
	
	for (i = k = 0; s1[i] != '\0'; i++) {
		duplicate = 0;
		for (j = 0; s2[j] != '0' && !duplicate; j++) { /*compare current entry in s1 to all entries in s2 */
			if (s1[i] == s2[j]){
				duplicate = 1;
			}
		}
		if (!duplicate) {
			s1[k++] = s1[i];
		}
	}
	s1[k] = '\0';
}

