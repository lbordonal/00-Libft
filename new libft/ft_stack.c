/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:41:06 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/23 18:39:56 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printstack(t_stack *stack_a)
{
	int	i;

	i = 0;
	if (stack_a->len == 0)
		ft_printf("%s\n", "-- stack empty --");
	while (i < stack_a->len)
	{
		ft_printf("|%d|  |%d|\n", stack_a->stack[i], stack_a->index[i]);
		i++;
	}
}

int	ft_checkstack(t_stack *stack)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = 0;
	while ((i < stack->len) && (flag == 0))
	{
		j = i + 1;
		while (j < stack->len)
		{
			if ((stack->stack[i] == stack->stack[j])
				|| (stack->stack[j] > INT_MAX) || (stack->stack[j] < INT_MIN))
			{
				flag = 1;
				ft_printf("%s\n", "Stack error! :(");
				break ;
			}
			j++;
		}
		i++;
	}
	return (flag);
}
