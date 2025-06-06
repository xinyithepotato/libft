/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:53:14 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 00:28:11 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	num;

	len = count_digits(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	while (num)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	int	tests[] = {0, 123, -456, 2147483647, -2147483648};
	for (int i = 0; i < 5; i++)
	{
		char *s = ft_itoa(tests[i]);
		printf("ft_itoa(%d) = %s\n", tests[i], s);
		free(s);
	}
	return (0);
}*/
