#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *dest;
    if (min >= max)
    {
        *range = 0;
        return 0;
    }
    int size = max - min;
    int i = 0;
    dest = malloc(size * sizeof(int));
    if (!dest)
    {
        *range = 0;
        return (-1);
    }
    *range = dest;
    while (i < size)
    {
        dest[i] = min + i;
        i++;
    }
    return (size);
}

int main()
{
    int *dest ;
    ft_ultimate_range(&dest , 5, 10);
    int i = 0;
    while (dest[i] != '\0')
    {
        printf("%d\n" , dest[i]);
        i++;
    }
}