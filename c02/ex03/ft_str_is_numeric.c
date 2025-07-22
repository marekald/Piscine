/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:43:24 by marekald          #+#    #+#             */
/*   Updated: 2025/07/18 14:26:51 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char	str1[] = "Doctor0Worm";
	char	str2[] = "0123456789";

	printf("str1: %s\n", str1);
	printf("resultado: %i\n", ft_str_is_numeric(str1));
	printf("str2: %s\n", str2);
	printf("resultado: %i\n", ft_str_is_numeric(str2));
} */