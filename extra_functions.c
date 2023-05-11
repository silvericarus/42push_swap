/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:22:17 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/13 16:11:14 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ordered(t_data *data, t_stack *stack)
{
	int		i;

	i = 0;
	while (i < data->size_a - 1)
	{
		if (stack[i].value > stack[i + 1].value)
			return (0);
		i++;
	}
	return (1);
}

int	highest_pos(t_data *data)
{
	t_stack	highest;
	int		i;

	i = 0;
	highest = data->st_a[0];
	while (i < data->size_a)
	{
		if (data->st_a[i].value > highest.value)
			highest = data->st_a[i];
		i++;
	}
	return (highest.index);
}

int	lowest_pos(t_data *data)
{
	t_stack	lowest;
	int		i;

	i = 0;
	lowest = data->st_a[i];
	while (i < data->size_a)
	{
		if (data->st_a[i].value < lowest.value)
			lowest = data->st_a[i];
		i++;
	}
	return (lowest.index);
}

int	doubles(char **argv, int index, int num, int args)
{
	int	i;

	i = 0;
	while (i < args)
	{
		if (num == ft_atoli(argv[i]) && i != index)
			return (1);
		i++;
	}
	return (0);
}
