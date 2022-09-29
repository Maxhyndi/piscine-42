/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseydel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:50:40 by mseydel           #+#    #+#             */
/*   Updated: 2022/09/28 17:21:30 by mseydel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = NULL;
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
