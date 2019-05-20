/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 18:15:06 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/01 01:29:01 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	if (!s1 || !s2)
		return (0);
	if ((*s1 == '\0' || *s2 == '\0') && *s1 != *s2 && n > 0)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}