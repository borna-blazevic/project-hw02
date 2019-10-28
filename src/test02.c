#include <cmplx.h>
#include <stdio.h>
#include <test.h>
int main()
{
    int fd, i;
    cmplx_t a,b,c;
    a[0]=1;
    a[1]=1;
    b[0]=1;
    b[1]=-1;
    cmplx_div(a,b,c);
    if(c[0]!=0 && c[1]!=1){
            printf("Test 2 failed!\n");
            return 0;
    }

    printf("Test 2 passed!\n");

    return 0;
}