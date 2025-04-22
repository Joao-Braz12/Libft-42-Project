#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char const *aux;

    *aux = *s[start];
    if(!(*aux = malloc(len * sizeof(char))))
        return(0);
    return(aux);
}
