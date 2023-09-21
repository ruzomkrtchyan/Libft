/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:57:16 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/02 15:28:28 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*ptr;
	char		a;

	i = 0;
	a = (char)c;
	while (s[i])
	{
		if (s[i] == a)
		{
			ptr = s + i;
			return ((char *) ptr);
		}
		i++;
	}
	if (a == '\0')
	{
		ptr = s + i;
		return ((char *) ptr);
	}
	return (NULL);
}
//  int	main()
// {
//  	const char s[10] = "barev";
// 	char c = '\0';
// 	printf("%s\n", strchr(s, c));
// 	printf("%s\n", ft_strchr(s, c));
// }
