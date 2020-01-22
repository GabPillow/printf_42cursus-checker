/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_csp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grochefo <grochefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 18:39:05 by grochefo          #+#    #+#             */
/*   Updated: 2020/01/21 17:12:28 by grochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_print_p(char *buff, va_list ap, t_format *form)
{
	ft_exit(((buff = ft_llutoa_base(va_arg(ap, unsigned long), BASE_16_MIN))
	!= NULL));
	ft_exit(((buff = ft_strjoinplus("0x", buff, 2)) != NULL));
	form->prec != -1 && ((int)ft_strlen(buff) < form->prec) ?
	buff = ft_manage_prec(buff, form) : 0;
	(int)(form->large - ft_strlen(buff)) > 0 ?
	buff = ft_manage_space(buff, form) : 0;
	return (buff);
}

char		*ft_print_c(char *buff, char c, t_format *form)
{
	form->large == 0 ? form->large++ : 0;
	ft_exit(((buff = ft_strdup("c")) != NULL));
	form->large > 1 ? buff = ft_manage_space(buff, form) : 0;
	buff[ft_strlenn(buff, 'c')] = c;
	form->ret += write(1, buff, form->large);
	return (buff);
}

char		*ft_print_s(char *buff, va_list ap, t_format *form)
{
	if (!(buff = ft_strdup(va_arg(ap, char*))))
		ft_exit(((buff = ft_strdup("(null)")) != NULL));
	form->prec != -1 && ((int)ft_strlen(buff) > form->prec) ?
	buff = ft_manage_prec(buff, form) : 0;
	(int)(form->large - ft_strlen(buff)) > 0 ?
	buff = ft_manage_space(buff, form) : 0;
	return (buff);
}
