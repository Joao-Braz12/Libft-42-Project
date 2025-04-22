size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    while (i < size - 1 && src[i] != '/0' && dst [i] != '/0')
    {
        dst[i] = src[i];
        i++;
    }
    while (dst[i])
    {
        dst[i] = '/0';
        i++;
    }
    return (i);
}