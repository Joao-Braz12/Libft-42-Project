char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *aux;

    if (!(aux = ft_strdup(s)))
        return (0);
    i = 0;
    while (aux[i])
    {
        aux[i] = f(i, aux[i]);
        i++;
    }
    return(aux);
}