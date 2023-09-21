/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:01:44 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/21 20:25:25 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char *s;

	s = (char *)str;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return (&s[i]);
		i--;
	}
	if (s[i] == '\0')
		return (&s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "Hola 42";
	char *f;
	int a = 'a';

	f = ft_strrchr(str, a);
	printf("La posicion rev es %p \n", (void *) f);
	f = strrchr(str, a);
	printf("La posicion rev es %p \n", (void *) f);

	return (0);
}*/
