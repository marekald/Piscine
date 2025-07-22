/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:33:29 by marekald          #+#    #+#             */
/*   Updated: 2025/07/18 21:41:42 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i + 1 < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/* #include <stdio.h>
int	main(void)
{
	char			src[] = "New Dawn Fades";
	char			dest[8];
	unsigned int	size = 15;

	printf("ft_strlcpy : %i %s", ft_strlcpy(dest, src, size), dest);
} */
