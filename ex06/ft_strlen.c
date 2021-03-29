/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:41:49 by sohan             #+#    #+#             */
/*   Updated: 2021/03/29 03:04:28 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;
	len = 0;

	while(str[len] != '\0')
	{
		len++;
	}
	
	return len;
}

int	main(void)
{
	char *str;
	int a;

	str = "0000";
	a = ft_strlen(str);
	
	printf("%d",a);

	return 0;
}
