#include <unistd.h>
#include <stdint.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

int read_word(int fd)
{
    int res;
    errno = 0;

    if (read(fd, &res, sizeof res) < 0)
    {
        if (errno != EINTR && errno != EAGAIN)
        {
            fprintf(stderr, "read word error: %s\n", strerror(errno));
            errno = 0;
            return -1;
        }
        errno = 0;
    }
    return res;
}
short read_half(int fd)
{
    short res;
    errno = 0;
    if (read(fd, &res, sizeof res) < 0)
    {
        if (errno != EINTR && errno != EAGAIN)
        {
            fprintf(stderr, "read halfword error: %s\n", strerror(errno));
            errno = 0;
            return -1;
        }
        errno = 0;
    }
    return res;
}
void write_word(int fd, int word)
{
    errno = 0;
    if (write(fd, &word, sizeof word) < 0)
    {
        if (errno != EINTR && errno != EAGAIN)
        {
            fprintf(stderr, "write word error: %s\n", strerror(errno));
        }
        errno = 0;
    }
}

void write_half(int fd, short word)
{
    errno = 0;
    if (write(fd, &word, sizeof word) < 0)
    {
        if (errno != EINTR && errno != EAGAIN)
        {
            fprintf(stderr, "write halfword error: %s\n", strerror(errno));
        }
        errno = 0;
    }
}