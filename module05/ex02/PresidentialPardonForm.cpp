/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:35:56 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 19:35:56 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &x)
{
	target = x.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &x)
{
	if (this != &x)
	{
		Form::operator=(x);
		target = x.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const
{
	return target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExec())
		throw (Form::GradeTooLowException());
	else if (!getBool())
		throw (Form::FormIsNotSigned());
	else
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
