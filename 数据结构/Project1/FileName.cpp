#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main() {

	//char str1[11];
	//strcpy(str1,"hello");
	//不能直接赋值

	int a = 5;
	printf("%p\n", &a);
	printf("%d\n", &a);
	//地址通配符是%p
	printf("%zu\n", sizeof(a));
	//sizeof的是%zu








	return 0;
}