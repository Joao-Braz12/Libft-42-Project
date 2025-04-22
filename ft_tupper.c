int ft_toupper(char c)
{
    if(c < 97 || c > 122)
        return (c);
    return (c - 32);
}