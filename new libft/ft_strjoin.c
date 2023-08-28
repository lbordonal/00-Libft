/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:27:41 by lbordona          #+#    #+#             */
/*   Updated: 2023/04/20 23:25:08 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	size_t	lentotal;

	lentotal = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * (lentotal + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && *(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (s2 && *(s2 + j))
	{
		*(str + i++) = *(s2 + j++);
	}
	*(str + i) = '\0';
	return (str);
}

/* {
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i + j] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
} */

/* int	main(void)
{
	char	s1[] = "Vasco nao ";
	char	s2[] = "sobe!!!!!";

	printf("%s", "s1 = ");
	printf("%s\n", s1);
	printf("%s", "s2 = ");
	printf("%s\n\n", s2);
	printf("%s", "ft_strjoin = ");
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} */
