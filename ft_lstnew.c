#include "libft.h"
 
t_list *ft_lstnew(void *content)
{
    t_list *obj;

    if(!(obj = (t_list *)malloc(sizeof(t_list)))
        return(0);
    obj->content = content;
    obj->next = NULL;
    return(obj);
}