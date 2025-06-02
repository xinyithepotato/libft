/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:04:48 by xinlim            #+#    #+#             */
/*   Updated: 2025/05/26 13:48:15 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	//original strlcpy keeps counting even if stopped copying
	while (src[i])
		i++;
	return (i);
}

/*#include <string.h>
#include <stdio.h>

void	test_strlcpy(const char *src, size_t dstsize)
{
	char dst1[100] = {0};  // buffer for ft_strlcpy
	char dst2[100] = {0};  // buffer for standard strlcpy (if available)

	size_t len_ft = ft_strlcpy(dst1, src, dstsize);
	// strlcpy is not standard in all systems, so compare manually if unavailable
	printf("src: \"%s\", dstsize: %zu\n", src, dstsize);
	printf("Result string: \"%s\"\n", dst1);
	printf("Returned length: %zu\n", len_ft);
	printf("Expected length: %zu\n", strlen(src));
	printf("----\n");
}

int	main(void)
{
	test_strlcpy("Hello, world!", 0);      // dstsize = 0
	test_strlcpy("Hello, world!", 5);      // dstsize < src
	test_strlcpy("Hello", 6);              // dstsize == src + 1
	test_strlcpy("Hi", 10);                // dstsize > src
	test_strlcpy("", 10);                  // empty src
	test_strlcpy("A", 2);                  // single character src
	return (0);
}*/
