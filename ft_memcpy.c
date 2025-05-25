/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:43:37 by xinlim            #+#    #+#             */
/*   Updated: 2025/05/25 23:29:44 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char a[14] = "hellomynameis";
	char b[20];

	char c[14] = "hellomynameis";
	char d[20];

	memcpy(&b, &a, sizeof(a));
	printf("%s", b);

	ft_memcpy(&d, &c, sizeof(c));
	printf("%s", d);
}
*/
