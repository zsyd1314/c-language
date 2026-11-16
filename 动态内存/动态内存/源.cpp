#include <stdio.h>
#include <stdlib.h>
int main() {
	void* a;
	int cnt = 0;
	while (a=(int*)100*1024*1024){
		cnt++;
	}printf("分配了%d00MB\n");
}