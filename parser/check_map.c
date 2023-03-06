/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <pcoimbra@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:39:49 by pcoimbra          #+#    #+#             */
/*   Updated: 2023/03/06 17:05:30 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	check_chars(char **map)
{
	int	i;
	int	j;
	
	while (map[j])
	{
		i = 0;
		while (map[j][i])
		{
			if (map[j][i] != '0' && map[j][i] != '1' && map[j][i] != 'N' &&
			map[j][i] != 'W' && map[j][i] != 'E' && map[j][i] != 'E' &&
			map[j][i] != ' ')
			return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	check_closed(char **map)