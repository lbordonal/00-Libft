/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:26:29 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 12:37:13 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!ptr_dest && !ptr_src)
		return (NULL);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

//Corrigir libft.h para funcionar o ft_memcpy sem ter que adicionar o codigo dele aqui

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!ptr_dest && !ptr_src)
		return (NULL);
	if (src < dest)
		while (n--)
		{
			ptr_dest[n] = ptr_src[n];
		}
	else if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[] = "Lucas";
	char	dest1[] = "Lucas";
	char	src[] = "XYZ";
	char	src1[] = "XYZ";

	printf("%s", dest);
	printf(" / ");
	printf("%s", src);
	printf("\n");
	ft_memmove(dest, src, 2);
	printf("%s", dest);
	printf("\n");
	memmove(dest1, src1, 2);;
	printf("%s", dest1);
} */
