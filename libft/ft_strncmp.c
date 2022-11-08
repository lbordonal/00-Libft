/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:43:07 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 16:47:06 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int		main(void)
{
	char	a[] = "Lucas";
	char	b[] = "Matheus";

	printf("%s\n", a);
	printf("%s\n\n", b);
	printf("%s", "ft_strncmp = ");
	printf("%d", ft_strncmp(a, b, 5));
	printf("\n");
	printf("%s", "strncmp = ");
	printf("%d", strncmp(a, b, 5));
	return (0);
} */
