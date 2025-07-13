/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:50:58 by marekald          #+#    #+#             */
/*   Updated: 2025/07/10 20:51:57 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, &"P", 1);
	else
		write(1, &"N", 1);
}
/* 
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
}
 */