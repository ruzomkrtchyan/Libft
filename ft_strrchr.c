/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:49:16 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/31 19:57:23 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptr = &s[i];
		i++;
	}
	if ((char)c == '\0')
		ptr = s + i;
	return ((char *)ptr);
}

// int	main()
// {
// 	char	*s = "Heyy my friieend";
// 	// printf("%p\n", (s + 16));
// 	int c = '1';
// 	printf("%s\n", ft_strrchr(s,c));
// 	printf("%s\n", strrchr(s,c));
// }
