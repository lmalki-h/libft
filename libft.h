/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:29:58 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/02/03 18:14:15 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# define TWO_BYTES_F	192
# define THREE_BYTES_F 	224
# define FOUR_BYTES_F 	240
# define REST_BYTES 	128
# define SIX_UNITS	63
# define TWELVE_UNITS	4095

# define BUFFER_SIZE	1
typedef struct		s_list
{
	void		*content;
	int		fd;
	struct s_list	*next;
}			t_list;

typedef struct		s_buff
{
	char		*content;
	struct s_buff	*next;
}			t_buff;

void			replace(char x, char y, char *tab);
void			capitalize(char *s);
int			ft_atoi(const char *str);
char			*ft_itohex(uintmax_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isspace(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			**ft_split(char const *s, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(intmax_t n);
char			*ft_strtrim(char const *s1, char const *set);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_lstcount(t_list *lst);
char			*ft_utoa(uintmax_t n);
void			add(char c, char *tab);
int			contains(char c, const char *tab);
char			*ft_strjoinfree(char *s1, char *s2, int n);
int			count_bits(int c);
int			get_bytes(int nb_bits);
int			last_byte(int c);
int			before_last_byte(int c);
void			ft_putwchar_fd(int c, int fd);
int			ft_patoi(char **s);
int			get_next_line(int fd, char **line);


t_buff			*ft_buffnew(char *content);
void			ft_buffadd_front(t_buff **abuff, t_buff *new);
int			ft_buffsize(t_buff *buff);
t_buff			*ft_bufflast(t_buff *buff);
void			ft_buffadd_back(t_buff **abuff, t_buff *new);
void			ft_buffdelone(t_buff *buff, void (*del)(void *));
void			ft_buffclear(t_buff **buff, void (*del)(void *));
void			ft_buffiter(t_buff *buff, void (*f)(void *));
t_buff			*ft_buffmap(t_buff *buff, void *(*f)(void *), void (*del)(void *));
int			ft_buffcount(t_buff *buff);
int			inset(int c, char *validchar);
int			empty_line(char *line);
double			distance(double start_x, double start_y, double end_x, double end_y);
#endif
