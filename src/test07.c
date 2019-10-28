#include <cmplx.h>
#include <stdio.h>

int main (){
    cmplx_t input[2], dft[2];
    input[0][0]=1;
    input[0][1]=1;
    input[1][0]=2;
    input[1][1]=2;
    cmplx_dft(input,dft,2);
    if(dft[0][0]!=3||dft[0][1]!=3||dft[1][0]!=-1||dft[1][1]!=-1){
            printf("Test 7 failed!\n");
            return 0;
    }

    printf("Test 7 passed!\n");

    return 0;
}