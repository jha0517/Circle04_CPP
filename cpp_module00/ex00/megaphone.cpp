#include <iostream>

void convert_it(char *str)
{
	for(int i = 0; str[i] != '\0'; i++)
		str[i] = toupper(str[i]);
}

int main(int ac, char const **av)
{
	(void) av;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for(size_t j = 0; j < str.length(); j++)
			{
				if (isalpha(str[j]))
					std::cout << (char)toupper(str[j]);
				else
					std::cout << (char)str[j];
			}
		}
		std::cout<<std::endl;
	}
}