/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:11:43 by marekald          #+#    #+#             */
/*   Updated: 2025/07/18 21:37:51 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int	main ()
{
	char	src[40] = "Soda";
	char	dest[12];

	printf("strncpy:	%s\n", strncpy(dest, src, 3));
	printf("ft_strncpy:	%s\n\n", ft_strncpy(dest, src, 3));
} */
