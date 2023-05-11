/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:22:42 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/06 19:45:52 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_clearsplit(char **strarr)
{
	unsigned int	index;

	index = 0;
	while (strarr[index])
	{
		free(strarr[index]);
		index++;
	}
	free(strarr);
	return (NULL);
}

static size_t	ft_countstring(char const *s, char c)
{
	size_t	i;
	int		count;
	int		status;

	i = 0;
	count = 0;
	status = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
			status = 1;
		if ((s[i] == c || s[i + 1] == '\0') && status == 1)
		{
			count++;
			status = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_getsubstr(char const *s, char c, int start, size_t *end)
{
	int	len;

	len = 0;
	s += start;
	while (s[len] != '\0' && s[len] != c)
		len++;
	*end = len;
	return (ft_substr(s - start, start, len));
}

static char	*ft_subsplit(char **strarr, char const *s, char c, size_t *start)
{
	size_t	end;
	char	*substr;

	substr = ft_getsubstr(s, c, *start, &end);
	if (!substr)
		return (ft_clearsplit(strarr));
	*start += end;
	return (substr);
}

/*
Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
*/
char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		count;
	char	**strarr;

	if (!s)
		return (NULL);
	i = 0;
	count = 0;
	strarr = (char **)malloc(sizeof(char *) * ft_countstring(s, c) + 1);
	if (!strarr)
		return (NULL);
	while (i < ft_strlen(s) || s[i] != '\0')
	{
		if (s[i] != c)
			strarr[count++] = ft_subsplit(strarr, s, c, &i);
		else
			i++;
	}
	strarr[count] = NULL;
	return (strarr);
}
