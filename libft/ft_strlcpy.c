/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:24:13 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:57:13 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The strlcpy() and strlcat() functions copy and concatenate 
strings respectively. They are designed to be safer, 
more consistent, and less error prone replacements for 
strncpy(3) and strncat(3). Unlike those functions, strlcpy() 
and strlcat() take the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long as size is larger 
than 0 or, in the case of strlcat(), as long as there is at least one 
byte free in dst). Note that a byte for the NUL should be included in 
size. Also note that strlcpy() and strlcat() only operate on true ''C'' 
strings. This means that for strlcpy() src must be NUL-terminated and for 
strlcat() both src and dst must be NUL-terminated
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	sizestr;

	i = 0;
	sizestr = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (sizestr);
}

/*int	main(void)
{
	char	str[20];
	char	*str1 = "hola";
	ft_strlcpy(str, str1, -1);
	printf("%s",str);
	printf("s %d \n",ft_strncmp(str, str1, ft_strlen(str1)));
}*/
