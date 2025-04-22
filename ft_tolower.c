int ft_tolower(char c)
{
    if(c < 65 || c > 90)
        return (c);
    return (c + 32);
}