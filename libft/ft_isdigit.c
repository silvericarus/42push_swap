/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:15:51 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:28:31 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
comprueba si el carácter es un dígito (de 0 a 9).
*/
int	ft_isdigit(int str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}
