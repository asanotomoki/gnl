/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test <test@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:08:27 by test              #+#    #+#             */
/*   Updated: 2022/06/08 15:08:45 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char		*get_next_line(int fd);
static char	*ft_newstrage(char *strage);
static char	*ft_read_buf(int fd, char *strage);
char		*ft_format(char *strage);
size_t		ft_strlen(const char *s);
char		*ft_strrchr(const char *s, int c);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char *s1, char const *s2);

#endif
