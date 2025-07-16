/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:26:43 by marekald          #+#    #+#             */
/*   Updated: 2025/07/16 20:59:44 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char *ft_strupcase(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("str: %s\n", str);
	ft_strupcase(str);
	printf("resultado: %s\n", str);
}
