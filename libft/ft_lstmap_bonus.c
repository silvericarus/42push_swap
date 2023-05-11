/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:33:39 by albgonza          #+#    #+#             */
/*   Updated: 2022/05/05 18:47:43 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Parámetros
lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada
en la iteración de cada elemento de la lista.
del: un puntero a función utilizado para eliminar
el contenido de un nodo, si es necesario.
Valor devuelto
La nueva lista.
NULL si falla la reserva de memoria.
Descripción
Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*save_lst;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		save_lst = ft_lstnew((*f)(lst->content));
		if (!save_lst)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, save_lst);
		lst = lst->next;
	}
	return (new_lst);
}
