/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:21:47 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 21:41:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	count;
	int	length

	count = 0;
	length = 0;
	while (tab[count])
	{
		if ((*f)(tab[count]) == 1);
		{
			length++;
		}
		count++;
	}
	return (length)
}
