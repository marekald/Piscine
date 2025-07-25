/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:12:19 by marekald          #+#    #+#             */
/*   Updated: 2025/07/22 17:12:24 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'
		&& (i + 1 < n))
		i++;
	return (s1[i] - s2[i]);
}

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*str1 = "Gho3t";
	char	*str2 = "Ghost";

	printf("strncmp: %i\n", strncmp(str1, str2, 5));
	printf("ft_strncmp: %i", ft_strncmp(str1, str2, 5));
} */
