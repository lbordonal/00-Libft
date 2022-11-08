/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:29:56 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 18:25:02 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_digit_count(nb);
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = 0;
	if (nb == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

/* int		main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;

	a = 123456789;
	b = 1;
	c = 0;
	d = 0001342;
	e = -42;
	f = -123456789;
	printf("%s", "a = ");
	printf("%d\n", a);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(a));
	printf("%s", "b = ");
	printf("%d\n", b);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(b));
	printf("%s", "c = ");
	printf("%d\n", c);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(c));
	printf("%s", "d = ");
	printf("%d\n", d);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(d));
	printf("%s", "e = ");
	printf("%d\n", e);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(e));
	printf("%s", "f = ");
	printf("%d\n", f);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(f));
	return(0);
} */
