/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 00:44:25 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 17:04:58 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && (haystack[i + j] == needle[j]) && ((i + j) < len))
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{	
	
    const char *haystack1 = "Hello, world!";
    const char *needle1 = "world";
    size_t len1 = strlen(haystack1); // Search the whole string

    const char *haystack2 = "Foo Bar Baz";
    const char *needle2 = "Bar";
    size_t len2 = 7; // Search only "Foo Bar"

    const char *haystack3 = "Testing searching non-existent";
    const char *needle3 = "xyz";
    size_t len3 = strlen(haystack3);

    const char *haystack4 = "Short";
    const char *needle4 = "Longer";
    size_t len4 = strlen(haystack4);

    const char *haystack5 = "Empty Needle Test";
    const char *needle5 = ""; // Empty needle
    size_t len5 = strlen(haystack5);

    const char *haystack6 = "Edge case same string";
    const char *needle6 = "Edge case same string";
    size_t len6 = strlen(haystack6);

    const char *haystack7 = "Overlap test";
    const char *needle7 = "test";
    size_t len7 = 8; // Search only "Overlap "

    const char *haystack8 = "aaaaa";
    const char *needle8 = "aa";
    size_t len8 = 5;

    char *result_ft;
    char *result_std;

    printf("--- Testing ft_strnstr ---\n\n");

    // Test Case 1: Standard match
    result_ft = ft_strnstr(haystack1, needle1, len1);
    result_std = strnstr(haystack1, needle1, len1);
    printf("Test 1: '%s' in '%s' (len %zu)\n", needle1, haystack1, len1);
    printf("ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
    printf("strnstr:    %s\n", result_std ? result_std : "NULL");
    printf("Match: %s\n\n", (result_ft == result_std) ? "PASSED" : "FAILED");

    // Test Case 2: Match within limited length
    result_ft = ft_strnstr(haystack2, needle2, len2);
    result_std = strnstr(haystack2, needle2, len2);
    printf("Test 2: '%s' in '%s' (len %zu)\n", needle2, haystack2, len2);
    printf("ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
    printf("strnstr:    %s\n", result_std ? result_std : "NULL");
    printf("Match: %s\n\n", (result_ft == result_std) ? "PASSED" : "FAILED");

    // Test Case 4: Needle longer than haystack
    result_ft = ft_strnstr(haystack4, needle4, len4);
    result_std = strnstr(haystack4, needle4, len4);
    printf("Test 4: '%s' in '%s' (len %zu)\n", needle4, haystack4, len4);
    printf("ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
    printf("strnstr:    %s\n", result_std ? result_std : "NULL");
    printf("Match: %s\n\n", (result_ft == result_std) ? "PASSED" : "FAILED");

    // Test Case 6: Haystack and needle are identical
    result_ft = ft_strnstr(haystack6, needle6, len6);
    result_std = strnstr(haystack6, needle6, len6);
    printf("Test 6: '%s' in '%s' (len %zu)\n", needle6, haystack6, len6);
    printf("ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
    printf("strnstr:    %s\n", result_std ? result_std : "NULL");
    printf("Match: %s\n\n", (result_ft == result_std) ? "PASSED" : "FAILED");

    // Test Case 7: Needle exists, but not within specified length
    result_ft = ft_strnstr(haystack7, needle7, len7);
    result_std = strnstr(haystack7, needle7, len7);
    printf("Test 7: '%s' in '%s' (len %zu)\n", needle7, haystack7, len7);
    printf("ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
    printf("strnstr:    %s\n", result_std ? result_std : "NULL");
    printf("Match: %s\n\n", (result_ft == result_std) ? "PASSED" : "FAILED");
    
    // Test Case 8: Multiple occurrences
    result_ft = ft_strnstr(haystack8, needle8, len8);
    result_std = strnstr(haystack8, needle8, len8);
    printf("Test 8: '%s' in '%s' (len %zu)\n", needle8, haystack8, len8);
    printf("ft_strnstr: %s\n", result_ft ? result_ft : "NULL");
    printf("strnstr:    %s\n", result_std ? result_std : "NULL");
    printf("Match: %s\n\n", (result_ft == result_std) ? "PASSED" : "FAILED");

    return 0;
}*/
