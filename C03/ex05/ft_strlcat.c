/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:15:59 by marekald          #+#    #+#             */
/*   Updated: 2025/07/22 18:16:02 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	max;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	len = dest_len + src_len;
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	max = size - dest_len - 1;
	while (src[i] != '\0' && i < max)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (len);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = " The Breeze";
	char	dest[] = "Call Me";
	int		i = ft_strlcat(dest, src, 5);

	printf("ft_strlcat: %i %s", i, dest);
} */
