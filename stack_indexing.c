/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_indexing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:43:25 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/13 18:36:44 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_values_array(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size_a)
	{
		data->values[i] = data->st_a[i].value;
		i++;
	}
}

void	mod_index(t_data *data, char stack_flag, char flag, int function_flag)
{
	int		i;
	int		size;
	t_stack	*stack;

	i = 0;
	if (stack_flag == 'a')
	{
		size = data->size_a;
		stack = data->st_a;
	}
	else
	{
		size = data->size_b;
		stack = data->st_b;
	}
	if (flag == '-')
		mod_index_minus(stack, i, size, function_flag);
	else
		mod_index_plus(stack, i, size, function_flag);
}

void	sort_values(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < data->size_a)
	{
		tmp = data->values[i];
		j = i;
		while (j < data->size_a)
		{
			if (tmp > data->values[j])
			{
				tmp = data->values[j];
				data->values[j] = data->values[i];
				data->values[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	index_value(t_data *data)
{
	int	i;
	int	index;
	int	tmp;
	int	j;

	i = 0;
	index = 0;
	while (i < data->size_a)
	{
		tmp = data->values[i];
		j = 0;
		while (j < data->size_a)
		{
			if (data->st_a[j].value == tmp)
			{
				data->st_a[j].pos = index;
				index++;
			}
			j++;
		}
		i++;
	}
}

void	general_values_preparation(t_data *data)
{
	data->values = malloc((data->size_a + 1) * sizeof(int));
	get_values_array(data);
	sort_values(data);
	index_value(data);
	free(data->values);
}
