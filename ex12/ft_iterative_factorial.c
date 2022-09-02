/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:40:29 by coder             #+#    #+#             */
/*   Updated: 2022/08/25 16:02:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	count;

	count = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (nb >= count)
	{
		result = count * result;
		count++;
	}
	return (result);
}
