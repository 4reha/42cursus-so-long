/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:13:11 by ael-hadd          #+#    #+#             */
/*   Updated: 2022/01/14 16:09:49 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i] && s[i] != '\0')
			i++;
	return (i);
}