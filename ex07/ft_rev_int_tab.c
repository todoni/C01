/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 23:34:44 by sohan             #+#    #+#             */
/*   Updated: 2021/03/29 05:12:05 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int range;
	int i;
	int n;

	n=size;
	i = 0;
	temp = 0;
	range = (int) (size / 2);
	for(int j =0;j<size;j++)
	{
		printf("%d ",tab[j]);		
	}
	printf("\n");
	
	while(range>=1)
	{
		temp = tab[i];
		printf("temp:%d tab[%d]:%d\n",temp,i,tab[i]);
		tab[i] = tab[size-1];
		printf("tab[%d]:%d,tab[%d]:%d\n",i,tab[i],size-1,tab[size-1]);
		tab[size-1] = temp;
		printf("tab[%d]:%d,temp:%d\n",size-1,tab[size-1],temp);
		size--;
		i++;
		range--;
	}
	for(int j=0; j<n;j++)
	{
		printf("%d ",tab[j]);
	}
}

int main(void)
{
	int *test=NULL;
	int size;
	int arr[99];

	size = 99;
	while(size>=1)
	{
		arr[size-1] = size;
		//printf("%d\n",arr[size-1]);
		size--;
	}
	size = 99;
	test = arr;
	ft_rev_int_tab(test, size);

	return 0;
}
