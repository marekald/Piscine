/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:55:51 by marekald          #+#    #+#             */
/*   Updated: 2025/07/15 18:55:53 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

/* #include <stdio.h>
int	main(void)
{
	int arr[] = {2, -44, 55, 3, 1};
	int	size = 5;
	int	i = 0;

	printf("\nPre ft_sort_int_tab ");
	while (size > i)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n(ง •̀_•́)ง\n");
	printf("\nPos ft_sort_int_tab ");
	i = 0;
	ft_sort_int_tab(arr, size);
	while (size > i)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	printf("\n");
} */
