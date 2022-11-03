/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:51:23 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 18:03:55 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s) - 1;
	str = (char *)s;
	while (s[i] != c)
	{
		i--;
	}
	str++;
	return (str);
}

int		main(void)
{
	char str[] = "Lucas Henrique";
	char	a;

	a = 'u';
	printf("%s", (char *)ft_strrchr(str, a));
	printf("\n");
	printf("%s", strrchr(str, a));
	return (0);
}
