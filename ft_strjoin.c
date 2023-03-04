/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:07:09 by afatir            #+#    #+#             */
/*   Updated: 2022/10/17 01:57:19 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ls1;
	size_t	ls2;
	char	*p;

	i = 0;
	if (!s1 || !s2)
		return (0);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	p = malloc((ls1 + ls2) * sizeof(char) + 1);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		p[ls1++] = s2[i++];
	p[ls1++] = '\0';
	return (p);
}
