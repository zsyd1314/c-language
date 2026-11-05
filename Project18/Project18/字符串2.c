#include <stdio.h>
#include <string.h>
#include <windows.h>
int main() {
	char s[] = "hello";
	char* p = strchr(s, 'l');
	char* c = *p;
	printf("%c", c);

}
