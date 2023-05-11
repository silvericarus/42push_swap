/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:25:27 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/17 16:50:28 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	get_distance(t_data *data, int index)
{
	int	i;

	i = 0;
	while (i < data->size_a)
	{
		if (data->st_a[i].index == index)
			break ;
		i++;
	}
	return (i);
}

void	fill_up_stack(t_data *data, char **strv)
{
	int		i;
	t_stack	st;

	i = 0;
	while (i < data->size_a)
	{
		st.value = ft_atoi(strv[i]);
		st.index = i;
		data->st_a[i] = st;
		i++;
	}
	general_values_preparation(data);
}

void	sort_4(char **strv, t_data *data)
{
	int		distance;

	if (!data->already_filled_up_4)
	{	
		fill_up_stack(data, strv);
	}
	data->already_filled_up_3 = 1;
	if (ordered(data, data->st_a))
		return ;
	distance = get_distance(data, lowest_pos(data));
	if (distance == 1)
		rotate(data, 0, 'a');
	else if (distance == 2)
	{
		rotate(data, 0, 'a');
		rotate(data, 0, 'a');
	}
	else if (distance == 3)
		rotate(data, 1, 'a');
	if (ordered(data, data->st_a))
		return ;
	push(data, 'b');
	sort_3(strv, data);
	push(data, 'a');
}

void	sort_5(char **strv, t_data *data)
{
	int		distance;

	fill_up_stack(data, strv);
	data->already_filled_up_4 = 1;
	if (ordered(data, data->st_a))
		return ;
	distance = get_distance(data, lowest_pos(data));
	sort_5_premovements(distance, data);
	if (ordered(data, data->st_a))
		return ;
	push(data, 'b');
	sort_4(strv, data);
	push(data, 'a');
}

void	push_swap_init(t_data *data, char **strv)
{
	if (data->size_a == 1)
		return ;
	data->st_a = malloc(data->size_a * sizeof(t_stack));
	data->st_b = malloc(data->size_a * sizeof(t_stack));
	data->movements = 0;
	if (data->size_a == 2)
	{
		if (ft_atoi(strv[0]) > ft_atoi(strv[1]))
			swap(data, 'a');
	}
	else if (data->size_a == 3)
		sort_3(strv, data);
	else if (data->size_a == 4)
		sort_4(strv, data);
	else if (data->size_a == 5)
		sort_5(strv, data);
	else if (data->size_a > 5)
		sort_many(strv, data);
	free(data->st_a);
	free(data->st_b);
}
