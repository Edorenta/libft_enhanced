/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraymedian.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:30:00 by pde-rent          #+#    #+#             */
/*   Updated: 2017/11/27 14:35:29 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_arraymedian(int *tab, unsigned long n)
{
	if (!tab)
		return (0);
	ft_arraysort(tab, tab[0], n, 1);
	return (tab[n / 2]);
}
