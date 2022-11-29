/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:58:35 by snakita           #+#    #+#             */
/*   Updated: 2022/11/17 18:58:35 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &x)
{
	*this = x;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &x)
{
	if (this == &x)
		return *this;
	const_cast<std::string &>(name) = x.name;
	grade = x.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incGrade()
{
	if (grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	grade--;
}

void Bureaucrat::decGrade()
{
	if (grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	grade++;
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &x)
{
	out << x.getName() << ", bureaucrat grade " << x.getGrade() << std::endl;
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getBool())
		std::cout << "Bureaucrat " << name << " signed " << form.getName() << std::endl;
	else if (grade > form.getSign())
		std::cout << "Bureaucrat " << name << " couldn't sign " << form.getName() << " because grade is too low!"
			<< std::endl;
	else
		std::cout << "Bureaucrat " << name << " couldn't sign " << form.getName() << " yet!" << std::endl;
}
