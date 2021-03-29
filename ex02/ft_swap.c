/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:25:31 by sohan             #+#    #+#             */
/*   Updated: 2021/03/28 20:31:06 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	printf("%d %d",*a,*b);
}

int	main(void)
{
	int *a;
	int *b;
	int va;
	int vb;
	va = 2;
	vb = 3;

	a = &va;
	b = &vb;

	ft_swap(a,b);

	return 0;
}
