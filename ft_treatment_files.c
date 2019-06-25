/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatment_files.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:43:28 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/20 15:01:31 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define END i++; close(fd); if (i != argc) write(1, "\n", 1);
#define FR i = 1; ptr = 0;

int		ft_treatment_files(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*str;
	char	**ptr;

	FR;
	while (i < argc)
	{
		g_side = 0;
		if ((fd = open(argv[i], O_RDWR)) == -1)
			write(2, "map error\n", 16);
		else
		{
			str = (char*)malloc(sizeof(char) * ft_string_lenght(argv[i]));
			str = ft_fill_str(argv[i], str);
			ft_sign(str, argv[i], ft_string_lenght(argv[i]));
			if (!check(argv[i]))
				write(2, "map error\n", 16);
			else
				ft_create_matrix(argv[i], ptr);
			free(str);
		}
		END;
	}
	return (0);
}
