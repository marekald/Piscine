/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:28:52 by marekald          #+#    #+#             */
/*   Updated: 2025/07/10 20:50:22 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
}
/* 
int	main(void)
{
	ft_print_alphabet();
}
 */