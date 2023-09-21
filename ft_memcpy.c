/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:16:52 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/03 19:10:11 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*new;
	char	*old;

	old = (char *) src;
	new = (char *) dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		new[i] = old[i];
		i++;
	}	
	return (dst);
}

// int	main()
//  {	 
//  	char src[] = {0, 0};
// 	char dst[] = "A"; 
// // 	//printf("%d\n", src[0]);
// // 	//printf("%s\n", dst);
// // 	//printf("%s\n", str);
//  	//printf ("%s\n", (char *)ft_memcpy(dst, src, 2));
//  	//printf("%s\n", dst);
//  printf ("%s\n", (char *)memcpy (dst, src, 2));
//  	printf("%s\n", dst);
//  }
