#include<stdio.h>

int f(void);

int Gall=12;

int main()
{
	f();
	f();
	f();
	return 0;
}

int f(void)
{
	int k=0;
	static int all=1;
	printf("Gall=%d\n",Gall);
	printf("all=%d\n",all);
	printf("k=%d\n",k);
	all+=2;
	k+=2;
	Gall+=2;
	printf("all=%d\n",all);
	printf("k=%d\n",k);
	printf("\n");
	return all;
}
