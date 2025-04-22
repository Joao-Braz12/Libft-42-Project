#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

void ft_bzero(void *s, size_t n);
void* ft_calloc( size_t num, size_t size );
void *ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memset (void *s, int c, size_t n);
char *ft_strchr(const char *str, int c);
int ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strlen (const char *str);
char *ft_strrchr(const char *str, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(char c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_toupper(char c);
int ft_isalnum(int c);
char* ft_strdup(const char *s1);
int ft_atoi(const char *str);

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

#endif
