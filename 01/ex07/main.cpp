/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gshona <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:30:17 by gshona            #+#    #+#             */
/*   Updated: 2021/03/18 12:43:57 by gshona           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
void	replace(std::ifstream &fin, std::string filename,
std::string search, std::string replace)
{
	std::ofstream	fout;
	std::string		content;
	std::size_t		len;
	std::size_t		pos;
	int				count;
	len = search.length();
	count = 0;
	pos = 0;
	getline(fin, content, '\0');
	fin.close();
	while (true)
	{
		pos = content.find(search, pos);
		count++;
		if (pos == std::string::npos)
			break;
		content.replace(pos, len, replace);
		pos += replace.size() + 1;
	}
	fout.open(filename, std::ofstream::trunc);
	fout << content;
	fout.close();
}


int		main(int ac, char **av)
{
	std::ifstream	fin;

	if (ac != 4)
	{
		std::cerr << "Not enough arguments\n";
		return (1);
	}
	fin.open(av[1]);	
	if (!fin.good())
	{
		std::cerr << "Unable to open file " << av[1] << " for reading\n";
		return (2);
	}
	replace(fin,std::string(av[1]) + ".replace", av[2], av[3]);
	return(0);
}
