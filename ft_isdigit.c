/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 21:51:58 by xinlim            #+#    #+#             */
/*   Updated: 2025/05/25 21:56:26 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 0 && c <= 9))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main ()
{
	printf("%d", ft_isdigit(4444));
	printf("%d", isdigit(4444));
}*/
