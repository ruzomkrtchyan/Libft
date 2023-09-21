/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:46:18 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/03 18:04:32 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	*tmp;

	tmp = (char *) str;
	i = 0;
	while (n > 0)
	{	
		tmp[i] = (char)c;
		i++;
		n--;
	}
	return (tmp);
}
// int main()
// {
// 	char str[] = "YeeeYoo";
// 	char str1[] = "YeeeYoo";
// 	printf ("%s\n", (char *)memset(str1 + 2,'.', 3));
// 	printf ("%s\n", (char *)ft_memset(str + 2,'.', 3));
// 	/*printf("char = %lu\n", sizeof(char));
// 	printf("char = %lu\n", sizeof(char *));*/

// 	/*char str[] = "YeeeY";
// 	int	a[] = {4, 50000000};
// 	printf("%d\n", a[0]);
// 	printf("%d\n", a[1]);
// 	printf("%ld\n", &a[0]);
// 	printf("%ld\n", &a[1]);
// 	*(str + 4) = '1';
// 	//printf ("%s", ft_memset(str,'.', 3));
// 	printf("%s\n",	str);
// 	printf("%ld\n",	str);
// 	printf("%ld\n",	(str + 1));*/
// }
