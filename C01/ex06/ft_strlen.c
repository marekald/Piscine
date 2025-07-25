/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:35:24 by marekald          #+#    #+#             */
/*   Updated: 2025/07/12 16:52:27 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* #include <stdio.h>
int	main(void)
{
	char *str = "abcdef";
	
	printf("\n(ง •̀_•́)ง\nEl string contiene %d caracteres.", ft_strlen(str));
} */
