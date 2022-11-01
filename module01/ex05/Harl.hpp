/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:13 by snakita           #+#    #+#             */
/*   Updated: 2022/11/01 20:33:13 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_HARL_H
#define CPP_HARL_H

#include <iostream>

class Harl {
public:
	Harl();
	~Harl();
	void complain( std::string level );

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};


#endif
