#include <cmplx.h>
#include <stdio.h>

int main (){
    cmplx_t input[2], idft[2];
    input[0][0]=3;
    input[0][1]=3;
    input[1][0]=-1;
    input[1][1]=-1;
    cmplx_idft(input,idft,2);
    if(idft[0][0]!=1||idft[0][1]!=1||idft[1][0]!=2||idft[1][1]!=2){
            printf("Test 8 failed!\n");
            return 0;
    }

    printf("Test 8 passed!\n");

    return 0;
}