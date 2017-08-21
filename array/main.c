#include <stdio.h>
int main()
{
	int a =3;
	int b =2;
	int array[3];
	array[0] =1;
	array[1] =10;
	array[2] =100;
	int *p=&a;
	int i;
	for (int i = 0; i < 6; i++)
	{
		printf("*p=%d\n",*p );
		p++;
	}
	printf("-------------------------------------\n");
	p =&a;
	for (int i = 0; i < 6; i++)	
	{
		printf("p[%d]=%d\n",i,p[i] );
		p++;
	}
	return 0;
}
