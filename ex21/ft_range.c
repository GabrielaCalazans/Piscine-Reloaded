/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:37:15 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 20:19:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*point;
	
	if (min >= max)
		return(NULL);
	point = (int *) malloc(sizeof(int) * (max - min));
	count = 0;
	while (min < max)
	{
		point[count] = min;
		count++;
		min++;
	}
	return(point);
}
