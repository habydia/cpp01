#include "Sed.hpp"

// ouvrir le fichier qui contiens les modifs

Sed::Sed(const std::string &input_filename, const std::string &output_filename)
{
	input_file.open(input_filename.c_str());
	if (!input_file.is_open())
	{
		std::cerr << "Error: could not open input file " << input_filename << std::endl;
		return;
	}
	output_file.open(output_filename.c_str());
	if (!output_file.is_open())
	{
		std::cerr << "Error: could not open output file " << output_filename << std::endl;
		return;
	}
}
// fermer les fichiers
Sed::~Sed()
{
	input_file.close();
	output_file.close();
}

std::string Sed::ft_replace(size_t pos, size_t s1_len, std::string &s1,
	std::string &s2, std::ifstream &input, std::ofstream &output)
{
	std::string line; //buffer

	while (std::getline(input, line))
	{
		pos = 0;
		pos = line.find(s1, pos);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1_len);
		line.insert(pos, s2);
		pos = line.find(s1, pos + s2.length());
	}
	output << line << std::endl;
	}
	return (line);
}
