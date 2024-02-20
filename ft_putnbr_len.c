/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:30 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/19 17:27:36 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbr_len(int nb)
{
	char *num;
	int len;

	num = ft_itoa(nb);
	len = ft_putstr_len(num);
	free (num);
	return (len);
}

/*
int main()
{
	ft_putnbr_len(125);
	return(0);
}
*/