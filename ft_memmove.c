#include "libft.h"

void*   ft_memmove(void *dst, const void *src, size_t n)
{
    int i;
    
    i = 0;
    if(!dst && !src)
        return (0);
    if(dst - src < n
    {
        i = n - 1;
        while(i < n && i >=0)
        {
            ((char *)dst)[i] = ((char *)src)[i];
            i--;
        }
    }else
        {
          while(i < n)
          {
              ((char *)dst)[i] = ((char *)src)[i];
              i++;
          }  
        }
    return (dst);
}