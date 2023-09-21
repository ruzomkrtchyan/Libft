/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:40:59 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/02/03 18:12:59 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int tar)
{
	if ((tar >= 'A' && tar <= 'Z') || (tar >= 'a' && tar <= 'z'))
		return (1);
	return (0);
}
// int main ()
// {
// 	int tar = '5' ;
// 	printf("%d",ft_isalpha(tar));
// 	printf("%d", isalpha(tar));
// 	return (0);
// }
