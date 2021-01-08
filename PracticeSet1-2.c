//What will be the output of the program?

#include<stdio.h>
int get();

int main()
{
    const int x = get();
    printf("%d", x);
    return 0;
}
int get()
{
    return 20;
}

//Output is gonna be 20 for above code.
