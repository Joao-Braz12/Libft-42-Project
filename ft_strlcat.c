size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i;
    int j;

    j = 0;
    i = ft_strlen(dst);
    while(src[j] && j < dstsize - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (i);
}