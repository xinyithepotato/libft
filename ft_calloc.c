/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:14:52 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 17:04:58 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*#include <stdio.h>
int main(void)
{
	int *arr = (int *)ft_calloc(10, sizeof(int));
	if (!arr)
	{
		printf("Allocation failed\n");
		return 1;
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]); // Should print 10 zeros
	printf("\n");

	free(arr);  // Important: free allocated memory to avoid leaks

	return 0;
}
*/
