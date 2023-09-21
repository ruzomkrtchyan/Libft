/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:53:44 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/03 19:09:49 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*new;
	char	*old;

	new = (char *) dst;
	old = (char *) src;
	if (!dst && !src)
		return (NULL);
	if (new < old)
		ft_memcpy(new, old, len);
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			new[i] = old[i];
			i--;
		}	
	}
	return (dst);
}

//  int main()
//  {
//  	char	dst[] = "12345678";
//  	char	src[] = "12345678";
//  	printf ("%s\n", (char *)ft_memmove(dst+2, dst, 3));
// 	printf ("%s\n", (char *)memmove (src+2, src, 3 )); 
//  }