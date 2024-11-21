/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:54:34 by adpedrer          #+#    #+#             */
/*   Updated: 2024/08/15 18:21:55 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <stddef.h>
# include <fcntl.h>
# include <ctype.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

////////////////////Gnl////////////////////

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 256
# endif

//Funtions
char	*get_next_line(int fd);
char	*reader( int fd, char *buff);
char	*trimer(char *line);

//Utils
char	*ft_strjoin_gnl(char *s1, const char *s2);
size_t	ft_strlen_gnl(const char *str);
char	*ft_strchr_gnl(const char *s, int c);
char	*ft_strdup_gnl(const char *src);
char	*ft_substr_gnl(char *s, unsigned int start, size_t len);

////////////////////Ft_Printf////////////////////

//funcions
int		ft_printf(const char *format, ...);
void	ft_percentage(const char *format, va_list args, int *res);
void	ft_num_function(va_list args, int *res);
void	ft_str_function(va_list args, int *res);
void	ft_char_function(va_list args, int *res);
void	ft_percentage_function(int *res);
void	ft_unsignednum_function(unsigned int nbr, int *res);
void	ft_hexa_function(unsigned long num, int *res, int is_uppercase);
void	ft_pointhexa(va_list args, int *res);

//utilities
void	ft_putnbr(int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);

////////////////////ft_libft////////////////////
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int chr);
int		ft_isdigit(int chr);
int		ft_isalnum(int chr);
int		ft_isascii(int chr);
int		ft_isprint(int chr);
size_t	ft_strlen(const char *str);
int		ft_intlen(int i);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *src, size_t amount);
void	*ft_memcpy( void *dst, const void *src, size_t n);
void	*ft_memmove( void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper( int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int chr);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp( const char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t i);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);
char	**ft_split(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*));

#endif