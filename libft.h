/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:29:58 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/14 10:03:59 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <math.h>
# include <stdio.h>
# define TWO_BYTES_F	192
# define THREE_BYTES_F 	224
# define FOUR_BYTES_F 	240
# define REST_BYTES 	128
# define SIX_UNITS	63
# define TWELVE_UNITS	4095

# define BUFFER_SIZE	1

typedef struct		s_list
{
	void			*content;
	int				fd;
	struct s_list	*next;
}					t_list;

typedef	struct		s_coord
{
	double			x;
	double			y;
}					t_coord;

void				replace(char x, char y, char *tab);
void				capitalize(char *s);
int					ft_atoi(const char *str);
char				*ft_itohex(uintmax_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isspace(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(intmax_t n);
char				*ft_strtrim(char const *s1, char const *set);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
int					ft_lstcount(t_list *lst);
char				*ft_utoa(uintmax_t n);
void				add(char c, char *tab);
int					contains(char c, const char *tab);
char				*ft_strjoinfree(char *s1, char *s2, int n);
int					count_bits(int c);
int					get_bytes(int nb_bits);
int					last_byte(int c);
int					before_last_byte(int c);
void				ft_putwchar_fd(int c, int fd);
int					ft_patoi(char **s);
int					get_next_line(int fd, char **line);
int					inset(int c, char *validchar);
int					empty_line(char *line);
double				distance(t_coord a, t_coord b);
char				**free_tab(char **tab);
int					end_with(char *file_name, char const *end);
int					rgb_to_int(int red, int green, int blue);
int					valid_color(int r, int g, int b);
void				free_lst(t_list *alst);
void				free_2darray(char **array);
int					has_valid_characters(char *line, char *validcharacters);
int					return_error(char *message);
int					exit_error(char *message);
t_coord				droite(t_coord point1, t_coord point2);
t_coord				perpendiculaire(t_coord droite, t_coord intersection);
t_coord				inter2d(t_coord droite1, t_coord droite2);
#endif
