#include <cmplx.h>
#include <stdio.h>
#include <test.h>
int main()
{
    int fd, i;
    cmplx_t a;
    a[0]=2;
    a[1]=2;
    if(2!=cmplx_mag(a)){
            printf("Test 3 failed!\n");
            return 0;
    }

    printf("Test 3 passed!\n");

    return 0;
}