/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:34:38 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 11:59:29 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str_s1;
	char	*str_s2;

	i = 0;
	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	while ((str_s1[i] != '\0' || str_s2[i] != '\0') && i < n)
	{
		if (str_s1[i] > str_s2[i])
			return (1);
		else if (str_s1[i] < str_s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/* int		main(void)
{
	char	a[] = "Matheus";
	char	b[] = "Lucas";

	printf("%s\n", a);
	printf("%s\n\n", b);
	printf("%s", "ft_memcmp = ");
	printf("%d", ft_memcmp(a, b, 4));
	printf("\n");
	printf("%s", "memcmp = ");
	printf("%d", memcmp(a, b, 4));
	return (0);
} */
