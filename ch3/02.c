/* Write a function escape(s,t) that converts characters like newline and tab
 * into visible escape sequences like \n and \t as it copies the string t to s.
 * Use a switch. Write a function for the other direction as well, converting
 * escape sequences into the real characters.
 */
 
#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main()
{
	char string1[50] = "\a Herp \t \"derp\" \n";
	char string2[50];
	
	printf("Original string: %s\n", string1);
	
	escape( string2, string1);
	printf("Escaped string: %s\n", string2);
	
	unescape(string1, string2);
	printf("Unescaped string: %s\n", string1);
	
	return 0;
}

void escape(char s[], char t[])
{
	int i, j;
	
	for (i = j = 0; t[i] != '\0'; i++,j++) {
		switch (t[i]) {
		case '\a':
			s[j++] = '\\';
			s[j] = 'a';
			break;
		case '\b':
			s[j++] = '\\';
			s[j] = 'b';
			break;
		case '\n':
			s[j++] = '\\';
			s[j] = 'n';
			break;
		case '\t':
			s[j++] = '\\';
			s[j] = 't';
			break;
		case '\v':
			s[j++] = '\\';
			s[j] = 'v';
			break;
		case '\\':
			s[j++] = '\\';
			s[j] = '\\';
		case '\?':
			s[j++] = '\\';
			s[j] = '\?';
			break;
		case '\"':
			s[j++] = '\\';
			s[j] = '\"';
			break;
		default:
			s[j] = t[i];
			break;
		}
	}
	s[j] = t[i];
}

void unescape(char s[], char t[])
{
	int i, j;
	
	for (i = j = 0; t[i] != '\0'; i++,j++) {
		if (t[i] == '\\') {
			switch(t[++i]) {
			case 'a':
				s[j] = '\a';
				break;
			case 'b':
				s[j] = '\a';
				break;
			case 'n':
				s[j] = '\n';
				break;
			case 't':
				s[j] = '\t';
				break;
			case 'v':
				s[j] = '\v';
				break;
			case '\\':
				s[j] = '\\';
				break;
			case '\?':
				s[j] = '\?';
				break;
			case '\"':
				s[j] = '\"';
				break;
			default:
				s[j++] = '\\';
				s[j] = t[i];
				break;
			}
		}
		else
			s[j] = t[i];
	}
}