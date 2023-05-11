/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:51:06 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/17 18:20:52 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_not_error(char **argv, t_data *data)
{
	int		i;

	i = 0;
	while (i < data->size_a)
	{
		if (!is_not_error_check(argv, i, data))
			return (0);
		i++;
	}
	return (1);
}

void	sort_3(char **argv, t_data *data)
{
	int		i;
	t_stack	st;

	i = 0;
	if (!data->already_filled_up_3)
	{
		while (i < data->size_a)
		{
			st.value = ft_atoi(argv[i]);
			st.index = i;
			data->st_a[i] = st;
			i++;
		}
		general_values_preparation(data);
	}
	while (!ordered(data, data->st_a))
	{
		if (highest_pos(data) == 0)
			rotate(data, 0, 'a');
		else if (highest_pos(data) == 1 && lowest_pos(data) == 2)
			rotate(data, 1, 'a');
		else if ((highest_pos(data) == 1 && lowest_pos(data) == 0)
			|| highest_pos(data) == 2)
			swap(data, 'a');
	}
}

int	sort_many(char **argv, t_data *data)
{
	int		i;

	i = 0;
	while (i < data->size_a)
	{
		data->st_a[i].index = i;
		data->st_a[i].value = ft_atoi(argv[i]);
		data->st_b[i].index = i;
		data->st_b[i].value = 0;
		data->st_b[i].pos = 0;
		i++;
	}
	general_values_preparation(data);
	if (!ordered(data, data->st_a))
		radix_sort(data);
	return (1);
}

int	is_not_first_error(t_data *data)
{
	if (data->size_a == 0)
		return (0);
	else
		return (1);
}

int	main(int args, char **argv)
{
	t_data	data;

	main_administration(argv, args, &data);
}
