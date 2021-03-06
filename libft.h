/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:25:19 by grochefo          #+#    #+#             */
/*   Updated: 2020/01/21 17:19:04 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define BASE_16_MIN	"0123456789abcdef"
# define BASE_16_MAJ	"0123456789ABCDEF"
# define BASE_10 		"0123456789"
# define BASE_BIN		"01"
# define BASE_8			"01234567"

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_uitoa_base(unsigned int n, char *base);
size_t				ft_strlen(const char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *big, const char *small);
char				*ft_strnstr(const char *big, const char *small, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memset(void *str, int c, size_t n);
int					ft_atoi(const char *str);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isalpha(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_getnumw(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char				*ft_strjoinplus(char *s1, char *s2, int c);
char				*ft_strndup(const char *s, size_t i);
char				*ft_itoabase(int n, char *base);
char				*ft_strrev(char *str);
char				*ft_llutoa_base(unsigned long long n, char *base);
char				*ft_ltoa_base(long n, char *base);
char				*ft_strjoinnplus(char *s1, char *s2, int c, size_t len2);
char				*ft_ftoa(long double n, size_t prec);
char				*ft_lltoa(long long n);
size_t				ft_strlenn(const char *str, char c);
char				*ft_ultoa_base(unsigned long n, char *base);
char				*ft_lltoa_base(long long n, char *base);
void				ft_exit(int c);
char				*arrondi(char *str, size_t prec);
char				*ft_llutoa(unsigned long long n);
char				*ft_uitoa(unsigned int n);
char				*ft_ultoa(unsigned long n);
char				*ft_bintoa(void *obj, size_t t);
char				*ft_strncut(char *dest, int n, int d);
#endif
