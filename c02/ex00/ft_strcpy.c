/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:48:52 by marekald          #+#    #+#             */
/*   Updated: 2025/07/16 19:30:00 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[40] = "Inevitable";
	char	dest1[100];
	char	dest2[100];

	printf("strcpy:		%s", strcpy(dest1, src));
	printf("ft_strcpy:	%s", ft_strcpy(dest2, src));
}
 */