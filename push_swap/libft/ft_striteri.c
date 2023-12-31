/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:15:53 by buyilmaz          #+#    #+#             */
/*   Updated: 2023/08/18 10:15:55 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	ft_42(unsigned int a, char *c)
{
	(void) a;
	*c = ft_toupper(*c);
}

#include <stdio.h>

int main()
{
	char str[] = "Merhaba42";
	printf("%s\n", str);
	ft_striteri(str, ft_42);
	printf("%s\n", str);
}
*/
