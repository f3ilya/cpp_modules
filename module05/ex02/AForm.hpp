/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:20:04 by snakita           #+#    #+#             */
/*   Updated: 2022/11/26 17:20:04 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP

#include <iostream>
#include <fstream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	Form(const std::string name, int sign, int exec);
	Form(const Form &x);
	Form &operator=(const Form &x);
	~Form();

	std::string getName() const;
	bool getBool() const;
	int getSign() const;
	int getExec() const;

	void beSigned(Bureaucrat &bur);

	virtual void execute(Bureaucrat const & executor) const = 0;

	class FormIsNotSigned : public std::exception {
		virtual const char * what() const throw();
	};
	class GradeTooHighException : public std::exception {
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char * what() const throw();
	};

private:
	const std::string name;
	bool bl;
	const int sign;
	const int exec;
};

std::ostream &operator << (std::ostream &out, const Form &x);

#endif
