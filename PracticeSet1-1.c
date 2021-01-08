//-------------------------What will be the output of the program?------------------------------
#include<stdio.h>

int main()
{
    const int i=0;
    printf("%dn", i++);
    return 0;
}
//it will give an error because we try to assign a value to the read-only variable i.e. constant.How to resolve this error is given below.

#include<stdio.h>

int main()
{
    int i=0;
    while(i<5){
        i++;
        printf("%d\n",i);
    }
    // return 0;
}
