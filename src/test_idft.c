#include <cmplx.h>
#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <math.h>
#include <test.h>
int main()
{
    int fd, i;
    cmplx_t input[POINTS_NUMBER], idft[POINTS_NUMBER], dft[POINTS_NUMBER];
    for (i = 0; i < POINTS_NUMBER; i++)
    {
        input[i][0] = sin(M_PI * 0.5 * i);
        input[i][1] = 0;
        input[i][0] = input[i][0] == 0 ? 0 : input[i][0];
        input[i][0] = roundf(input[i][0] * 10000) / 10000;
    }
    fd = open("dft.bin",  O_CREAT|O_RDONLY, 0777 );
    for (i = 0; i < POINTS_NUMBER; i++)
    {
        dft[i][0] = read_word(fd);
        dft[i][1] = read_word(fd);
    }
    close(fd);
    cmplx_idft(dft, idft, POINTS_NUMBER);
    for (i = 0; i < POINTS_NUMBER; i++)
    {
        if (input[i][0] != idft[i][0] || input[i][1] != idft[i][1])
        {
            printf("Test failed in tests_idtf!\n");
            printf("Test case %d: test result %f %f, should be %f %f\n", (i+1), idft[i][0], idft[i][1], input[i][0], input[i][1]);
            break;
        }
    }
    printf("All tests passed in tests_idtf!\n");
    return 0;
}