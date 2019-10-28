#include <cmplx.h>
#include <stdio.h>
#include <test.h>
int main()
{
    int fd, i;
    cmplx_t a,b,c;
    a[0]=1;
    a[1]=1;
    b[0]=0;
    b[1]=1;
    cmplx_mul(a,b,c);
    if(c[0]!=-1 && c[1]!=1){
            printf("Test 1 failed!\n");
            return 0;
    }

    printf("Test 1 passed!\n");

    return 0;
}