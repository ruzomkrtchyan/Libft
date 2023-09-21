/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:10:31 by rmkrtchy          #+#    #+#             */
/*   Updated: 2023/03/23 12:48:03 by rmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	free_malloc(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
	return (0);
}

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	if (s[0] == '\0')
		count = 1;
	return (count);
}

int	fill(char **tmp, char const *s, char c)
{
	int		i;
	int		j;
	int		m;

	i = 0;
	j = 0;
	m = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i] && ++j)
			i++;
		if (s[i - 1] != c)
			tmp[m++] = ft_substr(s, i - j, j);
		if (m != 0 && !tmp[m - 1])
			return (free_malloc(tmp));
		j = 0;
	}
	tmp[m] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;

	if (!s)
		return (NULL);
	tmp = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (tmp == NULL)
		return (NULL);
	if (fill(tmp, s, c) == 0)
		return (NULL);
	return (tmp);
}
// #include <stdio.h>
// int main()
// {
// 	char a[] = "      ";
// 	char **tmp = ft_split(a, ' ');
// 	int i = 0;
// 	// printf("%lu\n", *tmp);
// 	// printf("%lu\n", tmp);
// 	 while (tmp[i])
// 	{
//  		printf("%s\n", tmp[i++]);
// 	//  printf("%d\n", i);
// 	}
// } 