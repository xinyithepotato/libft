/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 23:18:30 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 15:40:48 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    // initializing string
    char str[] = "GeeksforGeeks";
    // character to be searched
    char chr = 'k';
    // Storing pointer returned by
    char* ptr = strrchr(str, chr);

    // getting the position of the character
    if (ptr) {
        printf("Last occurrence of %c in %s is at index %lld",
               chr, str, ptr - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s ", chr, str);
    }

	char* ptr2 = ft_strrchr(str, chr);
	// getting the position of the character
    if (ptr2) {
        printf("Last occurrence of %c in %s is at index %lld",
               chr, str, ptr2 - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s ", chr, str);
    }
    return 0;
}*/
