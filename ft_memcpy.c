#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    int i;

    i = 0;
    if(!dest & !src)
        return(0);
    while(i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}