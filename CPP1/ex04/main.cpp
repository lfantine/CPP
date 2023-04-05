#include <iostream>
#include <fstream>

void	ft_replace(std::string &line, std::string &s1, std::string &s2)
{
	size_t			benoit = 0;
	std::string		boeuf;
	while (true)
	{
		boeuf.reserve(line.size() + s2.size());
		boeuf.clear();
		benoit = line.find(&s1[0], benoit);
		if (benoit == std::string::npos)
			return ;
		boeuf.append(&line[0], benoit);
		boeuf += s2;
		boeuf.append(&line[benoit + s1.size()]);
		line.swap(boeuf);
		benoit += s2.size();
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage : ./launch [file name] [string1] [string2]" << std::endl;
		return (1);
	}
	std::string	filename;
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	if (s1.size() < 1)
	{
		std::cerr << "Error : your [string1] is empty" << std::endl;
		return (1);
	}
	int			r = 1;
	filename += argv[1];
	std::ifstream	ifs;
	ifs.open(filename);
	if (ifs.is_open() == 0)
	{
		std::cerr << "Error : open failed" << std::endl;
		exit(-1);
	}
	std::ofstream	ofs(filename + ".replace");
	for (std::string line; std::getline(ifs, line); )
	{
		if (r == 0)
			ofs << "\n";
		else if (r > 0)
			r--;
		if (s1 != s2)
			ft_replace(line, s1, s2);
		ofs << line;
	}
	ifs.close();
	ofs.close();
	(void)argc;
	(void)argv;
}