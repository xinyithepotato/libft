/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 22:08:36 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 15:16:41 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len])
		dst_len++;
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	i = dst_len;
	j = 0;
	while (src[j] && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char buffer[20];

    // Test 1
    buffer[0] = '\0';
    printf("Return: %zu, Result: \"%s\"\n", f
		t_strlcat(buffer, "Hello", sizeof(buffer)), buffer);
	printf("Return: %zu, Result: \"%s\"\n", 
		strlcat(buffer, "Hello", sizeof(buffer)), buffer);
    // Test 2
    printf("Return: %zu, Result: \"%s\"\n", 
		ft_strlcat(buffer, " World", sizeof(buffer)), buffer);
	printf("Return: %zu, Result: \"%s\"\n", 
		strlcat(buffer, " World", sizeof(buffer)), buffer);

    // Test 3 (buffer too small)
    char smallbuf[10] = "Hello";
    printf("Return: %zu, Result: \"%s\"\n", 
		ft_strlcat(smallbuf, " World", sizeof(smallbuf)), smallbuf);
	printf("Return: %zu, Result: \"%s\"\n", 
		strlcat(smallbuf, " World", sizeof(smallbuf)), smallbuf);

    // Test 4 (zero size)
    char zerobuf[10] = "Hello";
    printf("Return: %zu, Result: \"%s\"\n", 
		ft_strlcat(zerobuf, " World", 0), zerobuf);
	printf("Return: %zu, Result: \"%s\"\n", 
		strlcat(zerobuf, " World", 0), zerobuf);

    return 0;
}*/
