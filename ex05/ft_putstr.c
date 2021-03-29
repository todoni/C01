/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:41:49 by sohan             #+#    #+#             */
/*   Updated: 2021/03/29 03:04:58 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int len;
	len = 0;

	while(str[len] != '\0')
	{
		len++;
	}
	
	printf("%d\n",len);

	write(1, str, len);
}

int	main(void)
{
	char *str;

	str = "0000";
	ft_putstr(str);

	return 0;
}
