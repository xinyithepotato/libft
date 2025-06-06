/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:51:22 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 17:04:58 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	len;
	char	*trimmed;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	len = end - start + 1;
	trimmed = (char *)ft_calloc((len + 1), sizeof(char));
	if (!trimmed)
		return (0);
	i = 0;
	ft_memmove(trimmed, &s1[start], len);
	return (trimmed);
}

/*#include <stdio.h>
int	main(void)
{
	char *trimmed = ft_strtrim("deliciousHello, 42!deli", "deli");
	if (trimmed)
	{
		printf("Trimmed string: \"%s\"\n", trimmed);
		free(trimmed);
	}
}*/
