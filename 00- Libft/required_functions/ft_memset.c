/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <lbordona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:48:59 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/02 16:51:08 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void *ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if(i <= n)
		{
			s[i] = c;
			write(1, s[i], 1);
		}
		i++;
	}
	return (0);
}
