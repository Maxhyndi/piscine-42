/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseydel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:39:53 by mseydel           #+#    #+#             */
/*   Updated: 2022/09/24 13:35:37 by mseydel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
