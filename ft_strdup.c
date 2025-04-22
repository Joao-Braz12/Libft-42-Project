#include "libft.h"
char* ft_strdup(const char *s1)
{
    char *s2;

    if(!s1 || !(s2 = malloc(ft_strlen(s1) + 1)))
        return (0);
    ft_memcpy(s2, s1,ft_strlen(s1) + 1);
    return(s2);
}