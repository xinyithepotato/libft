/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:36:51 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 00:24:05 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	iteri_func(unsigned int i, char *c)
{
	if (i % 2 != 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32; // Uppercase if at odd index
}*/

/*#include <stdio.h>
int main()
{
	char	iterable[] = "hello42";
	printf("Before ft_striteri: %s\n", iterable);
	ft_striteri(iterable, iteri_func);
	printf("After  ft_striteri: %s\n", iterable);
}*/
