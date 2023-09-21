/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:20:03 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/01 15:12:48 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*ptr;

	ptr = 0;
	if (s1 && set)
	{
		i = 0;
		start = 0;
		end = ft_strlen(s1);
		while (ft_strchr(set, s1[start]) && start < end)
			start++;
		while (ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		ptr = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!ptr)
			return (0);
		while (start < end)
			ptr[i++] = s1[start++];
		ptr[i] = '\0';
	}
	return (ptr);
}
// int    main()
// {
//   char s[] = "578aaaa657";
//   char c[] = "597";
//   printf("%s\n", ft_strtrim(s,c));
// }
