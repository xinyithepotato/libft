/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 23:36:58 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/02 23:36:58 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Test 1: %d\n", ft_strncmp("abc", "abc", 3));     // 0
	printf("Test 2: %d\n", ft_strncmp("abc", "abd", 3));     // < 0
	printf("Test 3: %d\n", ft_strncmp("abc", "abb", 3));     // > 0
	printf("Test 4: %d\n", ft_strncmp("abc", "abcde", 3));   // 0
	printf("Test 5: %d\n", ft_strncmp("abc", "abcde", 5));   // < 0

	printf("Test 1: %d\n", strncmp("abc", "abc", 3));     // 0
	printf("Test 2: %d\n", strncmp("abc", "abd", 3));     // < 0
	printf("Test 3: %d\n", strncmp("abc", "abb", 3));     // > 0
	printf("Test 4: %d\n", strncmp("abc", "abcde", 3));   // 0
	printf("Test 5: %d\n", strncmp("abc", "abcde", 5)); // < 0

	return (0);
}*/
