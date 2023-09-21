/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:51:03 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/27 11:38:38 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*pxik;

	pxik = (char *) s;
	i = 0;
	while (i < n)
	{
		pxik[i] = '\0';
		i++;
	}
}
// int main()
// {
// 	char s[] = "Magic is in the air";  
// 	bzero (s +5, 3);
// 	printf ("%s\n", s );
// 	char s1[] = "Magic is in the air";
// 	ft_bzero(s1 +5, 3);
// 	printf ("%s\n", s1);
// 	printf ("%s", s1 + 8); 
// }
