/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:02:15 by hyunahjung        #+#    #+#             */
/*   Updated: 2023/02/04 19:41:46 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	check_filename_get_str(const char *filename)
{
	std::string		src;
	std::string		buffer;
	std::ifstream	ifs;
	char	c;
	
	ifs.open(filename);
	if (!ifs)
	{
		std::cout << "File non-existance or Right Denied!" << std::endl;
		return ("");
	}
	while (ifs.get(c))
		src+= c;
	ifs.close();
	if (src.empty())
	{
		std::cout << "File is empty!" << std::endl;
		return ("");
	}
	return (src);
}

std::string	ft_replace_from_file(std::string s1, std::string s2, std::string src)
{
	size_t		found;
	int			i;

	i = 0;
	if (s1.empty())
		return ("");
	found = src.find(s1);
	while (found != std::string::npos)
	{
		src.erase(src.begin() + found, src.begin() + found + s1.length());
		src.insert(found, s2);
		found += s2.size();
		i++;
		found = src.find(s1, found);
	}
	// std::cout << s1 << " found " << i << " times, replaced with " << s2 << std::endl;
	return (src);
}

int	string_to_file(const char *filename, std::string str)
{
	std::ofstream	ofs(filename);
	ofs << str;
	if (!ofs)
	{
		std::cout << "File not created!" << std::endl;
		return (1);
	}
	ofs.close();
	return (0);
}

int	main(int ac, char const **av)
{
	std::string		str;
	const	char	*filename;

	(void)av;
	if (ac != 4)
	{
		std::cout << "./sedIsForLosers [fileName] [replaceFrom] [toThis]";
		return (0);
	}
	filename = av[1];
	str = check_filename_get_str(filename);
	if (str.empty())
		return (1);
	str = ft_replace_from_file(av[2], av[3], str);
	if (str.empty())
	{
		std::cout << "Can't replace empty string." << std::endl;
		return (1);
	}
	std::string total = std::string(filename) + std::string(".replace");
	string_to_file(total.c_str(), str);
	return (0);
}