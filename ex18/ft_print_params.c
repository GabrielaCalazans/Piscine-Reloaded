/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:56:23 by coder             #+#    #+#             */
/*   Updated: 2022/08/26 19:19:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	lin;
	int	col;

	lin = 1;
	while (argc > lin)
	{
		col = 0;
		while (argv[lin][col] != '\0')
		{
			ft_putchar(argv[lin][col]);
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
