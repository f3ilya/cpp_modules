/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:20:12 by snakita           #+#    #+#             */
/*   Updated: 2022/11/26 17:20:12 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"

Form::Form() : name("Form"), bl(false), sign(150), exec(150) {}

Form::Form(const std::string name, int sign, int exec) : name(name), bl(false), sign(sign), exec(exec)
{
	if (sign > 150 || exec > 150)
		throw (Form::GradeTooLowException());
	if (sign < 1 || exec < 1)
		throw (Form::GradeTooHighException());
}

Form::Form(const Form &x) : name(x.name), bl(x.bl), sign(x.sign), exec(x.exec) {}

Form &Form::operator=(const Form &x)
{
	if (this != &x)
		bl = x.bl;
	return *this;
}

Form::~Form() {}

std::string Form::getName() const
{
	return name;
}

bool Form::getBool() const
{
	return bl;
}

int Form::getSign() const
{
	return sign;
}

int Form::getExec() const
{
	return exec;
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > sign)
		throw (Form::GradeTooLowException());
	else if (!bl)
		bl = true;
}

std::ostream &operator << (std::ostream &out, const Form &x)
{
	out << "----------Form-------------\n" << "Form name : " << x.getName() << "\n" << "Form is signed: "
		<< x.getBool() << "\n" << "Grade required to sign form: " << x.getSign() << "\n" << "Grade required to execute: "
		<< x.getExec() << "\n---------------------------" << std::endl;
	return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}
