/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <lbordona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:07:04 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/02 15:41:50 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		a = 'a';
	int		b = '1';

	printf("%d", ft_isalpha(a));
	printf("\n");
	printf("%d", isalpha(a));
	printf("\n");
	printf("\n");
	printf("%d", ft_isalpha(b));
	printf("\n");
	printf("%d", isalpha(b));
	return (0);
} */
