/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:20:58 by rluiz             #+#    #+#             */
/*   Updated: 2023/04/16 18:04:35 by rluiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(const int c)
{
	return (c >= 0 && c <= 127);
}
