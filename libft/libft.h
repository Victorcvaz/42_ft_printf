/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:54:34 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/09/28 17:41:39 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# define NULL_BYTE 1
# define LINE_BREAK 1
# define FD_LIMITS 1024

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void		ft_bzero(void *s, size_t n);
ssize_t		ft_putnbr_fd(long int n, int fd);
ssize_t		ft_putstr_fd(char *s, int fd);
ssize_t		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_itoa(int n);
char		*get_next_line(int fd);
char		*ft_strdup(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		**ft_split(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strnstr(const char *haystack, const char *needle, size_t n);
size_t		ft_strlen(const char *s);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			check_base_errors(char *base);
int			ft_calc_nbr_digits(long int number, int base_len);
char		*ft_itoa_base(long int number, char *base);
int			ft_atoi_base(char *str, char *base);
ssize_t		ft_putnbr_base_fd(long int nbr, char *base, int fd);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isspace(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_atoi(const char *nptr);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
