/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_int_overflow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 04:24:21 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int		int_overflow(void)
{
	if (ft_atoi("2147483648") == -2147483648)
		return (0);
	else
		return (-1);
}
