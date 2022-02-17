/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:00:38 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/16 13:03:48 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*linebreak;

	i = 1;
	linebreak = "\n";
	while (i < argc)
	{
		ft_putstr(&argv[i][0]);
		ft_putstr(linebreak);
		i++;
	}
	return (0);
}
