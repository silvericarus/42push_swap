/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:56:57 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/17 16:50:06 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
/*
value: El valor de ese nodo.
index: La posición en la lista.
pos: Indice asignado por una función para manejar los números.
*/
typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
}	t_stack;

typedef struct s_data
{
	int		size_a;
	int		size_b;
	t_stack	*st_a;
	t_stack	*st_b;
	int		*values;
	char	**tmp;
	int		need_to_liberate_tmp;
	int		movements;
	int		already_filled_up_3;
	int		already_filled_up_4;
	int		already_filled_up_5;
}	t_data;

//stack_utils
int			is_not_format_error(t_data *data, char **argv);
void		push_swap_init(t_data *data, char **strv);

//stack_edition
void		rotate(t_data *data, int reverse_flag, char stack_flag);
void		swap(t_data *data, char stack_flag);
void		push(t_data *data, char stack_flag);
void		rotate_secondary(t_data *data, t_stack *stack,
				int reverse_flag, char stack_flag);

//stack_indexing
void		general_values_preparation(t_data *data);
void		mod_index(t_data *data, char stack_flag,
				char flag, int function_flag);
void		index_value(t_data *data);
void		sort_values(t_data *data);
void		get_values_array(t_data *data);

//args_administration
void		free_all(t_data *data);
int			is_not_error_check(char **argv, int i, t_data *data);
void		main_administration(char **argv, int args, t_data *data);

//function_utils
void		mod_index_plus(t_stack *stack, int i, int size, int function_flag);
void		mod_index_minus(t_stack *stack, int i, int size, int function_flag);
void		print_stack(t_data *data, char stackflag);

//extra_functions
int			ordered(t_data *data, t_stack *stack);
int			highest_pos(t_data *data);
int			lowest_pos(t_data *data);
int			doubles(char **argv, int index, int num, int args);

//push_swap
int			sort_many(char **argv, t_data *data);
void		sort_3(char **argv, t_data *data);
int			is_not_error(char **argv, t_data *data);
int			is_not_first_error(t_data *data);

//algorithm
void		radix_sort(t_data *data);
int			get_min(t_data *data);
void		sort_5_premovements(int distance, t_data *data);

#endif