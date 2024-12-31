

#include<stdio.h>


int func()
{
	return 0xbeef;
}

int main(){
	//printf("Hello World!\n");
	func();
	return 0xf00d;
}