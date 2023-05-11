/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:59:48 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/17 16:49:34 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bits(t_data *data)
{
	int	i;
	int	total;
	int	sum;
	int	bits;

	i = 0;
	total = 32;
	while (i < data->size_a)
	{
		bits = 31;
		sum = 0;
		while (bits >= 0)
		{
			if (!((data->st_a[i].pos >> bits) & 1))
				sum++;
			else
				break ;
			bits--;
		}
		if (sum < total)
			total = sum;
		i++;
	}
	return (32 - total);
}

void	radix_sort(t_data *data)
{
	int	bytes;
	int	i;
	int	size;
	int	j;

	bytes = max_bits(data);
	size = data->size_a;
	i = 0;
	while (i < bytes)
	{
		j = 0;
		while (j < size)
		{
			if ((data->st_a[0].pos >> i) & 1)
				rotate(data, 0, 'a');
			else if (!((data->st_a[0].pos >> i) & 1))
				push(data, 'b');
			j++;
		}
		while (data->size_b != 0)
			push(data, 'a');
		i++;
	}
}

int	get_min(t_data *data)
{
	int	min;
	int	result;
	int	i;

	min = data->st_a[0].pos;
	i = 0;
	while (i < data->size_a)
	{
		if (data->st_a[i].pos < min)
		{
			min = data->st_a[i].pos;
			result = data->st_a[i].index;
		}
		i++;
	}
	return (result);
}

void	sort_5_premovements(int distance, t_data *data)
{
	if (distance == 1)
		rotate(data, 0, 'a');
	else if (distance == 2)
	{
		rotate(data, 0, 'a');
		rotate(data, 0, 'a');
	}
	else if (distance == 3)
	{
		rotate(data, 1, 'a');
		rotate(data, 1, 'a');
	}
	else if (distance == 4)
		rotate(data, 1, 'a');
}
