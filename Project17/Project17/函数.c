#include <stdio.h>
#include <string.h>
size_t mylen(const char* a) {
	int cnt = 0;
	while (a[cnt]!='\0') {
		cnt++;
	}
	return cnt;

}
int main(int argc,const char *argv[]) {
	char a[] = "hello";
	printf("strlen=%lu", mylen(a));



}