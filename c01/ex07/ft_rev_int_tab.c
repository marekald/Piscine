/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:53:13 by marekald          #+#    #+#             */
/*   Updated: 2025/07/15 18:52:16 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size--;
	while (size > i)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}

/* #include <stdio.h>
int	main(void)
{
	int	arr[4] = {1, 2, 3, 4};
	int size = 4;
	int	i = 0;

	printf("\nPre ft_rev_int_tab ");
	while (size > i)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n(ง •̀_•́)ง\n");
	printf("\nPos ft_rev_int_tab ");
	i = 0;
	ft_rev_int_tab(arr, size);
	while (size > i)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	printf("\n");
} */
