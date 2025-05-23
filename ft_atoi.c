#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int num;
    int sign;

    i = 0;
    num = 0;
    sign = 1;
    while(str[i] == ' ' || str[i] == '	')
        i++;
    if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
    while(str[i] >= '0' && str[i] <= '9' && str[i])
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return(sign * num);
}
