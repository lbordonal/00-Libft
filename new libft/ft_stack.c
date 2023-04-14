/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:41:06 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/22 00:01:17 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printstack_a(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->len_a == 0)
		ft_printf("%s\n", "-- Stack A - Empty --");
	else
	{
		ft_printf("%s\n", "-- Stack A --");
		while (i < stack->len_a)
		{
			ft_printf("|%d|\n", stack->stack_a[i]);
			i++;
		}
	}
	ft_printf("\n");
}

void	ft_printstack_b(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->len_b == 0)
		ft_printf("%s\n", "-- Stack B - Empty --");
	else
	{
		ft_printf("%s\n", "-- Stack B --");
		while (i < stack->len_b)
		{
			ft_printf("|%d|\n", stack->stack_b[i]);
			i++;
		}
	}
	ft_printf("\n");
}
