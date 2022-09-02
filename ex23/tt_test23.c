/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_test23.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:42:29 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 23:58:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*typedef int gabi;
typedef int*	int_p
#define INTP	int*

int main()
{
	gabi	a;
	int *a, b, c; // tem syntax diferente 
	INTP a, b, c; // mas tanto o typedef quanto o define, neste caso, estão fazendo a mesma coisa

	a = 10;
	return (0);
}*/

typedef struct	s_point
{
	int x;
	int y;
}		t_point;

int main()
{
	s_point	a;
	t_point *ptr;

	a.x = 10
	a.y = 42
	ptr = &a;
	//(*ptr).x = 10; está forma é identia a forma de baixo, em termos de efeito
	ptr->x = 10;
	return (0);
}