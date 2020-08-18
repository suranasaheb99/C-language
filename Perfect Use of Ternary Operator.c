//Print the Greatest Number.
/*let say 4 variables are there to compare__________________________
    -----------------------------------------------------------
       compare two variables | compare two variables                 //a>b?a:b  ?   c>d?c:d
    print the greatest value | print the gretest value              
   compare the updated value | compare the updated value
*/


#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    return ((((a>b)?a:b))>((c>d?c:d))?((a>b)?a:b):((c>d?c:d)));
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
