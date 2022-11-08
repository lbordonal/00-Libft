/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:47:32 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 16:08:55 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (nptr[i] == 45)
	{
		sign *= -1;
		i++;
	}
	while (nptr[i] == 32)
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i] != '\0')
	{
		result = (nptr[i] - '0') + (result * 10);
		i++;
	}
	result *= sign;
	return (result);
}

/* int		main(void)
{
	char a[] = "-1231as23";
	char b[] = "-+1231as23";
	char c[] = "+a231as23";
	char d[] = "  21+1231as23";
	char e[] = " aasdwae";

	printf("%s", "a = ");
	printf("%s\n", a);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(a));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(a));
	printf("%s", "b = ");
	printf("%s\n", b);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(b));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(b));
	printf("%s", "c = ");
	printf("%s\n", c);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(c));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(c));
	printf("%s", "d = ");
	printf("%s\n", d);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(d));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(d));
	printf("%s", "e = ");
	printf("%s\n", e);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(e));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(e));
	return (0);
} */
