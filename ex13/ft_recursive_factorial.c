/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:24:09 by coder             #+#    #+#             */
/*   Updated: 2022/08/23 19:48:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb >= 1)
	{
		result = nb * ft_recursive_factorial(nb -1);
	}
	return (result);
}
