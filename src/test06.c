#include <cmplx.h>
#include <stdio.h>
#include <math.h>
#include <test.h>
int main()
{
    if(cmplx_real(2,(M_PI/4))!=2){
            printf("Test 6 failed!\n");
            return 0;
    }

    printf("Test 6 passed!\n");

    return 0;
}