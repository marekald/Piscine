/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:26:43 by marekald          #+#    #+#             */
/*   Updated: 2025/07/17 21:34:21 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
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

char	*ft_strupcase(char *str)
{
	int	i;
	int	j;

	str = ft_strlowcase(str);
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((j != 1) && (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
			j = 1;
		if ((str[i] >= 'a' && str[i] <= 'z') && (j == 1))
			str[i] = str[i] - 32;
		j = 0;
		i++;
	}
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	char	str[] = "hi, how are you? 42wOrds foRty-two; fifty+and+one";

	printf("str:		%s\n", str);
	ft_strupcase(str);
	printf("\nresultado:	%s\n", str);
} */
