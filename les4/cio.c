#include <stdio.h>

int main()
{
    // printf("hello world!\n");
    fprintf(stdout,"hello world \n");
    int a;
    //scanf("%d",&a);
    fscanf(stdin,"%d",&a);
    if(a<0){
	 fprintf(stderr,"the value must >0\n");
	 return 1;
    }

    //printf("input value is: %d\n",a);
    return 0;

}
