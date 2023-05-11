/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:56:35 by albgonza          #+#    #+#             */
/*   Updated: 2023/01/18 00:05:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arrsize(void *arr)
{
	if (sizeof(arr) == 0)
		return ((size_t)0);
	else
		return ((size_t) sizeof(arr) / sizeof(arr[0]));
}
