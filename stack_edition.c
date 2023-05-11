/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_edition.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:48:01 by albgonza          #+#    #+#             */
/*   Updated: 2023/05/11 13:05:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	push_secondary(t_data *data, char stack_flag)
{
	t_stack	tmp;

	if (stack_flag == 'b')
	{
		tmp = data->st_a[0];
		mod_index(data, 'a', '-', 1);
		mod_index(data, 'b', '+', 1);
		data->size_a--;
		data->size_b++;
	}
	else
	{
		tmp = data->st_b[0];
		mod_index(data, 'a', '+', 1);
		mod_index(data, 'b', '-', 1);
		data->size_a++;
		data->size_b--;
	}
	return (tmp);
}

void	push(t_data *data, char stack_flag)
{
	t_stack	tmp;

	tmp = push_secondary(data, stack_flag);
	if (stack_flag == 'a')
		data->st_a[0] = tmp;
	else
		data->st_b[0] = tmp;
	data->movements++;
	ft_printf("p%c\n", stack_flag);
}

void	rotate(t_data *data, int reverse_flag, char stack_flag)
{
	t_stack	*stack;

	if (stack_flag == 'b')
		stack = data->st_b;
	else
		stack = data->st_a;
	data->movements++;
	rotate_secondary(data, stack, reverse_flag, stack_flag);
}

void	swap(t_data *data, char stack_flag)
{
	t_stack	tmp;
	t_stack	*stack;

	if (stack_flag == 'a')
		stack = data->st_a;
	else
		stack = data->st_b;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	stack[0].index = 0;
	stack[1].index = 1;
	data->movements++;
	ft_printf("s%c\n", stack_flag);
}

void	rotate_secondary(t_data *data, t_stack *stack,
		int reverse_flag, char stack_flag)
{	
	int		size;
	t_stack	tmp;

	size = data->size_a;
	if (stack_flag == 'b')
		size = data->size_b;
	else
		size = data->size_a;
	if (reverse_flag == 1)
	{
		tmp = stack[size - 1];
		mod_index(data, stack_flag, '+', 0);
		stack[0] = tmp;
		stack[0].index = 0;
		ft_printf("rr%c\n", stack_flag);
	}
	else
	{
		tmp = stack[0];
		mod_index(data, stack_flag, '-', 0);
		stack[size - 1] = tmp;
		stack[size - 1].index = size - 1;
		ft_printf("r%c\n", stack_flag);
	}
}
