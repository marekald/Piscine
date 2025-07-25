/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:39:14 by marekald          #+#    #+#             */
/*   Updated: 2025/07/18 14:27:11 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char	str1[] = "Ship To Wreck";
	char	str2[] = {31, 127};

	printf("resultado str1: %i\n", ft_str_is_printable(str1));
	printf("resultado str2: %i\n", ft_str_is_printable(str2));
} */
