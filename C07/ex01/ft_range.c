/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseydel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:07:25 by mseydel           #+#    #+#             */
/*   Updated: 2022/09/28 18:31:07 by mseydel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	i = 0;
	if (min >= max)
		return (0);
	tab = NULL;
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
