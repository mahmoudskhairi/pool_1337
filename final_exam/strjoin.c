 #include <stdio.h>
 #include <stdlib.h>

 int ft_len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_copy(char *dest , char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int ft_len_totale(int size, char **strs, char *sep)
{
    int i = 0;
    int tot_sep;
    int tot_strs = 0;
    int size_totale;
    tot_sep = (size - 1) * ft_len(sep);
    while (i < size)
    {
        tot_strs += ft_len(strs[i]);
        i++;
    }
    size_totale = tot_sep + tot_strs;
    return (size_totale);
}
 
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *dest;
    char *p;
    if (size == 0)
        return ((char *)malloc(sizeof(char)));
    p = (dest = malloc((ft_len_totale(size, strs, sep) + 1) * sizeof(char)));
    if (!p)
        return 0;
    int i = 0;
    while (i < size)
    {
        ft_copy(p , strs[i]);
        p += ft_len(strs[i]);
        if (i < size - 1)
        {
            ft_copy(p , sep);
            p += ft_len(sep);
        }
        i++;
    }
    *p = '\0';
    return (dest);
}

 int main()
{
    char *strs[3] = {"ahmed", "is", "my dad"};
    char *sep;
    sep = " "; 
    printf("%s", ft_strjoin(3, strs, sep));
}