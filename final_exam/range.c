#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *dest;
    int size;
    int i = 0;
    if (min >= max)
        return (NULL);
    size = max - min;
    dest = malloc(size * sizeof(int));
    if(!dest)
        return 0;
    while (i < size)
    {
        dest[i] = min + i;
        i++;
    }
    return (dest);
}

int main()
{
  int *dest;
  dest = ft_range(5, 10);
  int i = 0;
  while (dest[i])
  {
    printf("%d\n", dest[i]);
    i++;
  }
  return 0;
}