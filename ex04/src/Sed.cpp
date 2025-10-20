#include "Sed.hpp"

// ouvrir le fichier qui contiens les modifs

Sed::Sed(const std::string &input_file, const std::string &output_file)
{
	std::ifstream file(input_file);
	if (!file)
	{
		std::cerr << "Error: Could not open input file." << std::endl;
		return ;
	}
	std::ofstream outfile(output_file);
}
// fermer les fichiers
Sed::~Sed()
{
	if (_input_file.is_open())
		_input_file.close();
	if (_output_file.is_open())
		_output_file.close();
}

std::string Sed::ft_replace(size_t pos, size_t s1_len, const std::string &s1,
	const std::string &s2, std::ifstream &input, std::ofstream &output)
{
	_s1 = s1;
	_s2 = s2;
	_s1_len = s1.length();
	std::string line;
	while (std::getline(input, line))
		pos = line.find(_s1, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, _s1_len);
		line.insert(pos, _s2);
		pos = line.find(_s1, pos + _s2.length());
	}
	output << line << std::endl;
}

std::string Sed::ft_Sed(size_t pos, size_t s1_len, const std::string &s1,
	const std::string &s2, std::ifstream &input, std::ofstream &output)
{
	_s1 = s1;
	_s2 = s2;
	_s1_len = s1.length();
	std::string line;
	while (std::getline(input, line))
	{
		ft_replace(pos, s1_len, s1, s2, input, output);
	}
}
