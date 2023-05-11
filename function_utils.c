/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:13:24 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/17 16:39:05 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mod_index_plus(t_stack *stack, int i, int size, int function_flag)
{
	i = size;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		stack[i].index = i;
		i--;
	}
	(void)function_flag;
}

void	mod_index_minus(t_stack *stack, int i, int size, int function_flag)
{
	i = 0;
	while (i < size)
	{
		stack[i] = stack[i + 1];
		stack[i].index = i;
		i++;
	}
	(void)function_flag;
}

void	print_stack(t_data *data, char stackflag)
{
	int	i;
	int	size;

	i = 0;
	if (stackflag == 'a')
		size = data->size_a;
	else
		size = data->size_b;
	ft_printf("Stack %c:\n", stackflag);
	while (i < size)
	{
		if (stackflag == 'a')
		{
			ft_printf("| Element %d: %d (Position %d) |\n",
				data->st_a[i].index, data->st_a[i].value,
				data->st_a[i].pos);
		}
		else
		{
			ft_printf("| Element %d: %d (Position %d) |\n",
				data->st_b[i].index, data->st_b[i].value,
				data->st_b[i].pos);
		}
		i++;
	}
}
