/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:15 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:15 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int main(void)
{
	Harl H;
	H.complain("DEBUG");
	H.complain("INFO");
	H.complain("WARNING");
	H.complain("ERROR");
	return 0;
}
