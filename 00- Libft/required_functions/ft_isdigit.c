/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <lbordona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:07:04 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/02 15:41:54 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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

	printf("%d", ft_isdigit(a));
	printf("\n");
	printf("%d", isdigit(a));
	printf("\n");
	printf("\n");
	printf("%d", ft_isdigit(b));
	printf("\n");
	printf("%d", isdigit(b));
	return (0);
} */
