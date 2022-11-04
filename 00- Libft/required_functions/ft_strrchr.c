/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:51:23 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 11:34:18 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	if (c == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			str = (char *)s;
		i++;
	}
	return (str);
}

/* int		main(void)
{
	char str[] = "Lucas Henrique";
	char	a;

	a = 'u';
	printf("%s", (char *)ft_strrchr(str, a));
	printf("\n");
	printf("%s", strrchr(str, a));
	return (0);
} */
