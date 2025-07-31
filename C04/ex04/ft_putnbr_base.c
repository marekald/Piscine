/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:51:22 by marekald          #+#    #+#             */
/*   Updated: 2025/07/24 16:59:22 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	if (!ft_valid(base))
		return ;
	len = ft_strlen(base);
	n = nbr;
	if (len == 0)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	write(1, &base[n % len], 1);
}

/* int	main(void)
{
	write(1, "Decimal: ", 10);
	ft_putnbr_base(12345, "0123456789");
	write(1, "\nHexadecimal: ", 15);
	ft_putnbr_base(12345, "0123456789abcdef");
	write(1, "\nOctal: ", 9);
	ft_putnbr_base(12345, "01234567");
	write(1, "\nBinario: ", 11);
	ft_putnbr_base(12345, "01");
	write(1, "\nNo base: ", 11);
	ft_putnbr_base(12345, "");
	write(1, "\n", 1);
} */
