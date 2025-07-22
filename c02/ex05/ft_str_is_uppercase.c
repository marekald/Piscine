/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:36:51 by marekald          #+#    #+#             */
/*   Updated: 2025/07/18 14:27:03 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char	str1[] = "Touch me";
	char	str2[] = "TOUCHME";

	printf("str1: %s\n", str1);
	printf("resultado: %i\n", ft_str_is_uppercase(str1));
	printf("str2: %s\n", str2);
	printf("resultado: %i\n", ft_str_is_uppercase(str2));
} */
