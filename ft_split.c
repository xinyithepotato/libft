/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:50:51 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 16:39:54 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//to count how many substrings are in the string s
int	count_words(char const *s, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

//allocates and returns copy of substring s
char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = ft_calloc(end - start + 1, sizeof(char *));
	if (!word)
		return (0);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

//to check for errors during memory allocation
char	**error_check(char const *s, char c)
{
	char	**result;

	if (!s)
		return (0);
	result = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (0);
	return (result);
}

// logic for the inner loop
int	process_char(char const *s, char c, char **result, int vars[3])
{
	if (s[vars[0]] != c && vars[2] < 0)
		vars[2] = vars[0];
	else if ((s[vars[0]] == c || s[vars[0] + 1] == '\0') && vars[2] >= 0)
	{
		if (s[vars[0]] == c)
			result[vars[1]] = word_dup(s, vars[2], vars[0]);
		else
			result[vars[1]] = word_dup(s, vars[2], vars[0] + 1);
		if (!result[vars[1]++])
		{
			while (vars[0]-- > 0)
				free(result[vars[0]]);
			free(result);
			return (0);
		}
		vars[2] = -1;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		vars[3];

	result = error_check(s, c);
	vars[0] = 0;
	vars[1] = 0;
	vars[2] = -1;
	while (s[vars[0]])
	{
		if (!process_char(s, c, result, vars))
			return (0);
		vars[0]++;
	}
	result[vars[1]] = 0;
	return (result);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	**result;
	int		i;
	char	*str = "42school is awesome";
	char	delimiter = ' ';

	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("ft_split failed\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result); 

	return (0);
}*/
