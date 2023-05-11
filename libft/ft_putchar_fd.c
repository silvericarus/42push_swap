/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:47:50 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:43:10 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Envía el carácter ’c’ al file descriptor
especificado.
*/
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
