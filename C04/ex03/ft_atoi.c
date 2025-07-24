/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:51:17 by marekald          #+#    #+#             */
/*   Updated: 2025/07/24 10:51:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_neg(char *str, int *neg)
{
	int	i;

	i = 0;
	*neg = 1;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			*neg = *neg * -1;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	num;

	num = 0;
	i = ft_neg(str, &neg);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - 48);
			i++;
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (num * neg);
		}
		else
			break ;
	}
	return (num * neg);
}

/* #include <stdio.h>
int	main(void)
{
	printf("ft_atoi: %i\n", ft_atoi("  -+--54d3 21 "));
} */
