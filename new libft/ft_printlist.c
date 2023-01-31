/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:11:48 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/18 15:52:50 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlist(t_list *list)
{
	if (!list)
	{
		ft_printf("%s", "Empty list! :(");
		return ;
	}
	while (list)
	{
		ft_putstr_fd(list->content, 1);
		list = list->next;
	}
	ft_printf("\n");
}
