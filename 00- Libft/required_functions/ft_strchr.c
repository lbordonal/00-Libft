/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:22 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 15:49:54 by lbordona         ###   ########.fr       */
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

void	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != c)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (str);
}

/* int		main(void)
{
	const char str[] = "Lucas";
	int	c = 117;

	printf("%ld", ft_strchr(str, c));
	return (0);
} */
