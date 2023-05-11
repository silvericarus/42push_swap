/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:15:51 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:27:33 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*comprueba si el carácter es alfabético*/
int	ft_isalpha(int str)
{
	if ((str < 'a' || str > 'z') && (str < 'A' || str > 'Z'))
		return (0);
	return (1);
}
