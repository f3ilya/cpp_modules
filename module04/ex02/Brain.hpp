/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:00:13 by snakita           #+#    #+#             */
/*   Updated: 2022/11/06 18:00:13 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#define GREEN "\x1b[3;32m"
#define END "\x1b[0m"
#define RED "\x1b[0;31m"

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain &x);
	Brain &operator=(const Brain &x);
	~Brain();

	void setIdeas(std::string idea);
	void printIdeas(void );

private:
	std::string ideas[100];
};


#endif
