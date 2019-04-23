/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:20:34 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 17:09:15 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;
	int l;

	if (s == NULL)
		return ;
	i = 0;
	l = ft_strlen(s);
	while (i < l)
	{
		f(&s[i]);
		i++;
	}
}
