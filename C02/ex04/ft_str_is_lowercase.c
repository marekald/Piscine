/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:33:07 by marekald          #+#    #+#             */
/*   Updated: 2025/07/18 14:26:57 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char	str1[] = "Hypnotize";
	char	str2[] = "hypnotize";

	printf("str1: %s\n", str1);
	printf("resultado: %i\n", ft_str_is_lowercase(str1));
	printf("str2: %s\n", str2);
	printf("resultado: %i\n", ft_str_is_lowercase(str2));
} */
