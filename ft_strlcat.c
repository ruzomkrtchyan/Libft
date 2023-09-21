/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:25:08 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/16 17:52:18 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dst && !dstsize)
		return (0);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	while (j + 1 < dstsize && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	src = src + i;
	return (ft_strlen(src) + ft_strlen(dst));
}
// int main ()
// {
// 	char dst[] = "aaaaaaaaa";
// 	const char src[] = "baa";
// 	printf("%lu\n", strlcat(dst,src, 5));
// 	printf("%lu", ft_strlcat(dst,src,5));
// }