/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:49:11 by sohan             #+#    #+#             */
/*   Updated: 2021/03/28 20:19:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	
	*********nbr = 42;
	printf("%d",*********nbr);
}

int 	main(void)
{
	int *pt_nbr1;
	int **pt_nbr2;
	int ***pt_nbr3;
	int ****pt_nbr4;
	int *****pt_nbr5;
	int ******pt_nbr6;
	int *******pt_nbr7;
	int ********pt_nbr8;
	int n;
	int *********n_ptr;
	
	n = 1;
	pt_nbr1 = &n;
	pt_nbr2 = &pt_nbr1;
	pt_nbr3 = &pt_nbr2;
	pt_nbr4 = &pt_nbr3;
	pt_nbr5 = &pt_nbr4;
	pt_nbr6 = &pt_nbr5;
	pt_nbr7 = &pt_nbr6;
	pt_nbr8 = &pt_nbr7;
	n_ptr = &pt_nbr8;
	
	ft_ultimate_ft(n_ptr);
	
	return 0;
}
