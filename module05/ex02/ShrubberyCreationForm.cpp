/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <snakita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:34:52 by snakita           #+#    #+#             */
/*   Updated: 2022/11/29 19:34:52 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &x)
{
	target = x.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &x)
{
	if (this != &x)
	{
		Form::operator=(x);
		target = x.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const
{
	return target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExec())
		throw (Form::GradeTooLowException());
	else if (!getBool())
		throw (Form::FormIsNotSigned());
	else {
		std::ofstream file;
		file.open(target + "_shrubbery");

		if (file.is_open())
		{
			file << ". .       .           .        .           . " << std::endl
				 << "   .          .          .     .            ." << std::endl
				 << "    .       .       *****    .        .   .  " << std::endl
				 << " .     .       . ***********                 " << std::endl
				 << "    .         ******************* .    .     " << std::endl
				 << "              *********************          " << std::endl
				 << "   .    .    ************************        " << std::endl
				 << "       .    *************************    .   " << std::endl
				 << "             **********************          " << std::endl
				 << "    .    .       *************      .        " << std::endl
				 << "                       00                    " << std::endl
				 << "    @@@@@      .     .  000          @@@@@   " << std::endl
				 << "   /////              0000      .   /////    " << std::endl
				 << "#############################################" << std::endl;
		} else {
			std::cout << "Can't open file!" << std::endl;
			return;
		}
		file.close();
	}
}
