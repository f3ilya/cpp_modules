/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:43:15 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 21:43:15 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <iostream>

class Intern {
public:
	Intern();
	Intern(const Intern &x);
	Intern &operator=(const Intern &x);
	~Intern();

	Form *makeForm(std::string name, std::string target);

	class FormNotFound : public std::exception {
		virtual const char * what() const throw();
	};
};


#endif
