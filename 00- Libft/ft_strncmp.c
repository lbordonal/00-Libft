/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:43:07 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 10:41:50 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/* int		main(void)
{
	char	a[] = "Lucas";
	char	b[] = "Matheus";

	printf("%s\n", a);
	printf("%s\n\n", b);
	printf("%s", "ft_strncmp = ");
	printf("%d", ft_strncmp(a, b, 3));
	printf("\n");
	printf("%s", "strncmp = ");
	printf("%d", strncmp(a, b, 3));
	return (0);
} */
