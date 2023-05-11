/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:26:32 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:35:10 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Cuenta el número de nodos de una lista.
*/
int	ft_lstsize(t_list *lst)
{
	int	index;

	index = 0;
	while (lst)
	{
		index++;
		lst = lst->next;
	}
	return (index);
}
