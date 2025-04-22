
static bool verify(char const *s1,char const *s2,char const set, int i )
{
    int j;

    j = 0;
    while(set[j])
        {
            if(s1[i] == set[i])
                return(false);
            j++;
        }
    return (true);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    char const *s2;

    i = 0;
    while(s1[i])
    {
        if(verify(s1, s2, set, i))
        {
            s2[i] = malloc(sizeof(char));
            s2[i] = s1[i];
        }
        i++;
    }
    return (s2);
}