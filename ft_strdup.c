/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:19:29 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 17:04:58 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	i;
	char	*dup;

	i = 0;
	while (str1[i])
		i++;
	dup = ft_calloc(i + 1, sizeof(char *));
	if (!dup)
		return (0);
	i = 0;
	while (str1[i])
	{
		dup[i] = str1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
