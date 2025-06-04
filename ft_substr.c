/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:26:44 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/04 13:26:44 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = 0;
	while (s[s_len])
		s_len++;
	//if start index exceeds the length of the string
	if (start >= s_len)
		return (malloc(1));
	if (len > s_len - start)
		//max length of the substring
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (0);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
