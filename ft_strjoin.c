/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:39:38 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 17:04:58 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = ft_calloc(len_s1 + len_s2, sizeof(char));
	if (!joined)
		return (0);
	ft_memmove(joined, s1, len_s1);
	ft_memmove(joined + len_s1, s2, len_s2);
	return (joined);
}

/*#include <stdio.h>
int main(void)
{
	char *result = ft_strjoin("Hello, ", "world!");
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
}*/
