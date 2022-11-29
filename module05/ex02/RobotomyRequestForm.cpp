/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:35:23 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 19:35:23 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &x)
{
	 target = x.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &x)
{
	if (this != &x)
	{
		Form::operator=(x);
		target = x.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
	return target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExec())
		throw (Form::GradeTooLowException());
	else if (!getBool())
		throw (Form::FormIsNotSigned());
	else {
		std::cout << "Drr..Drr..." << std::endl;
		int i = std::rand() % 2;
		if (i == 1)
			std::cout << target << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy failed. :(" << std::endl;
	}
}
