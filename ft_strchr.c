/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 23:02:51 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 15:47:46 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main() 
{
   const char *str = "Welcome to Tutorialspoint";
   char ch = 'u';
   // Find the first occurrence of 'u' in the string
   char *p = strchr(str, ch);

   if (p != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, p);
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }

   char *q = ft_strchr(str, ch);
   if (q != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, q);
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}*/
