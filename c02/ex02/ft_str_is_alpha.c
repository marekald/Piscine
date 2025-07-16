/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:25:15 by marekald          #+#    #+#             */
/*   Updated: 2025/07/16 15:39:41 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	char	str1[] = "as que tiñan que estar";
	char	str2[] = "asquetianqueestar";

	printf("str1: %s\n", str1);
	printf("resultado: %i\n", ft_str_is_alpha(str1));
	printf("str2: %s\n", str2);
	printf("resultado: %i\n", ft_str_is_alpha(str2));
} */
