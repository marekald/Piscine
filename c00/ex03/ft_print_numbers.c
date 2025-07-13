/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:55:34 by marekald          #+#    #+#             */
/*   Updated: 2025/07/10 20:51:00 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		write(1, &c, 1);
		c++;
	}
}
/* 
int main(void)
{
	ft_print_numbers();
}
 */