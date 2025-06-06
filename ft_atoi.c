/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinlim <xinlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 00:59:52 by xinlim            #+#    #+#             */
/*   Updated: 2025/06/06 15:41:09 by xinlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_result(int sign, unsigned long long result)
{
	if (sign == 1 && result > 2147483647)
		return (-1);
	if (sign == -1 && result > 2147483648UL)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	int					check;
	unsigned long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		check = check_result(sign, result);
		if (check != 1)
			return (check);
		i++;
	}
	return ((int)(result * sign));
}

/*#include <stdio.h>  
#include <stdlib.h>
int main(void)
{
    // Test Cases
    const char *test_cases[] = {
        "12345",
        "-6789",
        "+987",
        "   123",            // Leading spaces
        "\t\n\r\v\f    456", // Various leading whitespaces
        "  -789",            // Leading spaces and negative sign
        "0",
        "42abc",             // Characters after digits
        "abc42",             // No leading digits
        "",                  // Empty string
        " ",                 // Only space
        "-",                 // Only sign
        "+",                 // Only sign
        "++123",             // Multiple signs (should be 0)
        "--456",             // Multiple signs (should be 0)
        "- 123",             // Space between sign and digits (should be 0)
        "2147483647",        // INT_MAX
        "-2147483648",       // INT_MIN
        "2147483648",        // INT_MAX + 1 (overflow)
        "-2147483649",       // INT_MIN - 1 (underflow)
        "999999999999999999999999999999", // Very large number
        "-999999999999999999999999999999", // Very small number
        "    -42",
        "    +42"
    };

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    int ft_result;
    int std_result;

    printf("--- Testing ft_atoi ---\n\n");

    for (int i = 0; i < num_tests; i++)
    {
        const char *current_test_str = test_cases[i];

        ft_result = ft_atoi(current_test_str);
        std_result = atoi(current_test_str);

        printf("Test: \"%s\"\n", current_test_str);
        printf("ft_atoi: %d\n", ft_result);
        printf("std_atoi: %d\n", std_result);
        printf("Match: %s\n\n", (ft_result == std_result) ? "PASSED" : "FAILED");
    }
    return 0;
}*/
