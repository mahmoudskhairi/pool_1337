#include <stdio.h>
#include <stdlib.h>

int ft_len(char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    char *dest;
    int i = 0;
    dest = malloc(ft_len(src) * sizeof(char) + 1);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[] = " ahmed ";
    printf("%s", ft_strdup(src));
    return 0;
}