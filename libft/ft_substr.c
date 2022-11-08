/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:26:48 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/07 16:27:04 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new = malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while ((i < ft_strlen(s)) && (len-- > 0))
		new[j++] = s[i++];
	new[i] = '\0';
	return (new);
}

/* int	main(void)
{
	char	s[] = "Matheus";
	int		start = 2;

	printf("%s", "s = ");
	printf("%s\n", s);
	printf("%s", "start = ");
	printf("%d\n", start);
	printf("%s", "len = ");
	printf("%d\n\n", 5);
	printf("%s", "ft_substr = ");
	printf("%s\n", ft_substr(s, start, 5));
	return (0);
} */
