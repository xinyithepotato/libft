/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 00:00:01 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/03 00:00:01 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t					i;

	ptr = s;
	i = 0;
	while(i < n)
	{
		if (ptr[i] == c)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "42KL Core Program";

	// Using your implementation
	char *res1 = ft_memchr(str, 'K', 10);
	if (res1)
		printf("Found using ft_memchr: %s\n", res1);
	else
		printf("Not found using ft_memchr.\n");

	// Using standard library for comparison
	char *res2 = memchr(str, 'K', 10);
	if (res2)
		printf("Found using memchr: %s\n", res2);
	else
		printf("Not found using memchr.\n");

	return 0;
}