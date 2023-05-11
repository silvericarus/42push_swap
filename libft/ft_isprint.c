/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:15:51 by albgonza          #+#    #+#             */
/*   Updated: 2022/04/19 16:10:05 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
comprueba si el carácter es imprimible, 
incluyendo el espacio en blanco.
*/
int	ft_isprint(int str)
{
	if (str < ' ' || str > '~')
		return (0);
	return (1);
}
