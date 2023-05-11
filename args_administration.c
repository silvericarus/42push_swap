/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_administration.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:01:27 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/17 16:35:02 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_data *data)
{
	int	i;

	i = 0;
	if (data->need_to_liberate_tmp == 1)
	{
		while (i < data->size_a)
		{
			free(data->tmp[i]);
			i++;
		}
		free(data->tmp);
	}
}

int	secondary_error_check(char **argv, t_data *data, int i)
{
	long	tmp;
	char	*tmpstr;

	tmp = ft_atoi(argv[i]);
	tmpstr = ft_itoa(tmp);
	if ((tmp == 0 && ft_strncmp(argv[i], "0", 1) != 0)
		|| (tmp == -1 && ft_strncmp(argv[i], "-1", 1) != 0)
		|| (ft_strncmp(argv[i], tmpstr, ft_strlen(argv[i])) != 0))
	{
		free(tmpstr);
		return (0);
	}
	free(tmpstr);
	if (doubles(argv, i, tmp, data->size_a))
		return (0);
	return (1);
}

int	is_not_error_check(char **argv, int i, t_data *data)
{
	int	j;

	j = 0;
	if (!argv[i])
		return (0);
	while (argv[i][j] != '\0')
	{
		if ((argv[i][j] == '-' || argv[i][j] == '+')
			&& ft_isdigit(argv[i][j + 1]))
			j++;
		if (!ft_isdigit(argv[i][j]))
			return (0);
		j++;
	}
	return (secondary_error_check(argv, data, i));
}

void	secondary_admin(char **argv, int args, t_data *data)
{
	if (args == 2)
	{
		data->tmp = ft_split(argv[1], ' ');
		data->size_a = (int)ft_matrix_size(data->tmp);
		data->size_b = 0;
		data->need_to_liberate_tmp = 1;
	}
	else
	{
		data->size_a = args - 1;
		data->size_b = 0;
		data->tmp = &argv[1];
		data->need_to_liberate_tmp = 0;
	}
	data->already_filled_up_3 = 0;
}

void	main_administration(char **argv, int args, t_data *data)
{
	secondary_admin(argv, args, data);
	if (is_not_first_error(data))
	{
		if (is_not_error(data->tmp, data))
			push_swap_init(data, data->tmp);
		else
		{
			if (data->need_to_liberate_tmp == 1)
				free_all(data);
			ft_putendl_fd("Error", 2);
			return ;
		}
	}
	if (data->need_to_liberate_tmp == 1)
		free_all(data);
}
