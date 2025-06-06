/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:22:54 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 00:28:57 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
		i++;
	new_str = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_str)
		return (0);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*#include <stdio.h>
char	map_func(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}
*/

/*
int main(void)
{
	char		*original;
	char		*mapped;

	original = "hello42";
	mapped = ft_strmapi(original, map_func);
	if (mapped)
	{
		printf("Original: %s\n", original);
		printf("Mapped  : %s\n", mapped);
		free(mapped);
	}
	else
		printf("ft_strmapi failed\n");
	return (0);
}
*/
