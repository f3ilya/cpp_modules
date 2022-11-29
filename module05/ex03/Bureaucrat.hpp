/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:58:30 by snakita           #+#    #+#             */
/*   Updated: 2022/11/17 18:58:30 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#include "AForm.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &x);
	Bureaucrat &operator=(const Bureaucrat &x);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incGrade(void);
	void decGrade(void);

	void signForm(Form &form);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char * what() const throw();
	};

private:
	const std::string name;
	int grade;
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &x);

#endif
