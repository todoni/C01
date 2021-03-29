/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_method2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:41:49 by sohan             #+#    #+#             */
/*   Updated: 2021/03/28 22:58:03 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int len;
	len = 0;

	while(str[len] !=0)
	{
		write(1, &str[len],1);
		len++;
	}
	
	printf("%d\n",len);

	write(1, str, len);
}

int	main(void)
{
	char *str;

	str = "asdfasdfasdf";
	ft_putstr(str);

	return 0;
}
