/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:31:24 by microdri          #+#    #+#             */
/*   Updated: 2022/06/22 17:11:16 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	char categoria = 'A';
	char *str = NULL;
	int	pe_bom = 42;
	int pe_ruim = -2147483648;
	unsigned int gols = 762;
	char *tecnico = "malvadao";


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("\ncaracteres escritos-> %i\n\n", ft_printf("CATEGORIA: %%%c\n", categoria));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("\ncaracteres escritos-> %i\n\n", printf("CATEGORIA: %%%c\n", categoria));

	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("\ncaracteres escritos-> %i\n\n", ft_printf("JOGADORES APROVADO: %s\n", str)); 
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("\ncaracteres escritos-> %i\n\n", printf("JOGADORES APROVADO: %s\n", str));


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("PONTUACAO PE BOM: %d\nPONTUACAO PE RUIM: %i\n\n", pe_bom, pe_ruim));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("PONTUACAO PE BOM: %d\nPONTUACAO PE RUIM: %i\n\n", pe_bom, pe_ruim));
	
	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("PONTUACAO ACERTO AO GOL: %u\n\n", gols));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("PONTUACAO ACERTO AO GOL: %u\n\n", gols));


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("TIME: %x%x%x%x%x\n\n", 15, 10, 11, 4, 2));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("TIME: %x%x%x%x%x\n\n", 15, 10, 11, 4, 2));

	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("MAIORIA DOS GOLS SAO DE: %X%X%X%X%X%X%X%X\n\n", 12, 10, 11, 14, 12, 10, 13, 10));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("MAIORIA DOS GOLS SAO DE: %X%X%X%X%X%X%X%X\n\n", 12, 10, 11, 14, 12, 10, 13, 10));


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("TECNICO: %p\n\n", tecnico));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("TECNICO: %p\n\n", tecnico));

	printf("\033[0;33m--_--...--_--...--_--...--_--...--_--...É SOBRE ISSO...--_--...--_--...--_--...--_--...--_--\033[0m\n");

}
