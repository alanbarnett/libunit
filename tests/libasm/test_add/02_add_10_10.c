/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_add_10_10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 16:49:26 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int	test_add_10_10(void)
{
	return (ft_add(10, 10));
}

int	add_10_10(void)
{
	if (test_add_10_10() == 20)
		return (0);
	else
		return (1);
}
