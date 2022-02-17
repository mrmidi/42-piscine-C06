/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:56:57 by ashabeln          #+#    #+#             */
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

	i = argc;
	linebreak = "\n";
	while (i > 1)
	{
		ft_putstr(argv[i - 1]);
		ft_putstr(linebreak);
		i--;
	}
	return (0);
}
