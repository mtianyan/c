#include <stdio.h>

int main()
{
	int i,j;
	printf("input the int value i:\n"); 
	scanf("%d", &i); //默认输入流是键盘
	printf("input the int value j:\n");
	scanf("%d", &j);
	if(0!=j){	
	    printf("%d/%d=%d\n",i,j,i/j);
	}else{
	    fprintf(stderr,"j != 0\n");
	    return 1;
	
	}


	return 0;
}
