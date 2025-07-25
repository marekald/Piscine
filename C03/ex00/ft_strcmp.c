/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:01:12 by marekald          #+#    #+#             */
/*   Updated: 2025/07/24 15:14:23 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/* #include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*str1 = "Ha";
	char	*str2 = "Ha";

	printf("strcmp: %i\n", strcmp(str1, str2));
	printf("ft_strcmp: %i", ft_strcmp(str1, str2));
} */
