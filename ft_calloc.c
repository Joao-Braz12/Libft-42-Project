#include "libft.h"

void* ft_calloc( size_t num, size_t size )
{
    size_t  i;
    void    *aux; 

    i = num * size;
    *aux = malloc(i);
    if (!aux)
        return (0);
    ft_memset (aux, 0, i);
        return (aux);
}
