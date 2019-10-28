#include <cmplx.h>
#include <stdio.h>
#include <math.h>
#include <test.h>
int main()
{
    int fd, i;
    cmplx_t a;
    a[0]=2;
    a[1]=2;
    if((M_PI/4)!=cmplx_phs(a)){
            printf("Test 4 failed!\n");
            return 0;
    }

    printf("Test 4 passed!\n");

    return 0;
}