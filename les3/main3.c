#include <stdio.h>

int main(int argc,char* argv[])
{
    printf("argc is %d\n",argc);
    //int i;
    for(int i =0;i<argc;i++){
	printf("argv[%d]is %s\n",i,argv[i]);
    }

    return 101;
}
