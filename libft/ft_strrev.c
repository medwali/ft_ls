/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-idri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:44:51 by mel-idri          #+#    #+#             */
/*   Updated: 2019/04/10 18:47:55 by mel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *s)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		s[i] ^= s[j];
		s[j] ^= s[i];
		s[i] ^= s[j];
		i++;
		j--;
	}
}