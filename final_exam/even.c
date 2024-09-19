#include <unistd.h>

int main()
{
    char s[] = "For 42 !! ";
    int i = 0;
    while (s[i] != '\0')
    {
        if (i % 2 != 0)
            write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}