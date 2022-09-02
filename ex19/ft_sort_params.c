/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:52:55 by coder             #+#    #+#             */
/*   Updated: 2022/08/31 17:03:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

void	ft_print_params(int ac, char *av[])
{
	int	lin;
	int	col;

	lin = 1;
	while (ac > lin)
	{
		col = 0;
		while (av[lin][col] != '\0')
		{
			ft_putchar(av[lin][col]);
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}

int	main(int argc, char *argv[])
{
	int		count;
	char	*temp;

	count = 1;
	if (argc > 1)
	{
		while (count < argc - 1)
		{
			if (ft_strcmp(argv[count], argv[count + 1]) > 0)
			{
				temp = argv[count];
				argv[count] = argv[count + 1];
				argv[count + 1] = temp;
				count = 0;
			}
			count++;
		}
		ft_print_params(argc, argv);
	}
}
