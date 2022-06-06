/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test <test@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 00:32:44 by test              #+#    #+#             */
/*   Updated: 2022/06/06 22:27:24 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char *get_next_line(int fd) {
	static char *strage;
	char *res;
	//bffersizeのチェック
	//static領域に改行があるかを確認
	if(BUFFER_SIZE <= 0) 
		return (NULL);
	if (ft_strchr(strage, '\n')) {
		res = ft_format(strage);
		strage = ft_newstrage(strage);
		return (res);
	}
	else {
		strage = ft_strchr(strage, '\n') + 1;
	}
	return (strage);
}

char *ft_format(char *strage) {
	char *ch;
	char *res;
	size_t len;

	ch =  "\n";
	len = 0;
	while (ft_strchr(ch, strage[len]) == NULL)
		len++;
	if (len == 0)
		return (NULL);
	len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL) {
		free(strage);
		return (0);
	}
	ft_strlcpy(res, strage, len + 1);
	return (res);
}

static char ft_newstrage(char strage)
{
	
}
