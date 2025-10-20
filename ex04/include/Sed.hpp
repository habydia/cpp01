#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>
# include <string>

class Sed
{
  public:
	const std::ofstream _output_file; // fichier qui va contenir les modifs
	const std::ifstream _input_file;  // fichier source

	std::string _s1; // chaine a remplacer
	std::string _s2; // chaine de remplacement
	size_t _s1_len;  // longueur de la chaine a remplacer
	size_t _pos;     // position de la chaine a remplacer

	// constructor ouvre le fichier qui contiens les modifs
	Sed(const std::string &input_file, const std::string &output_file);
	// destructor ferme les fichiers
	~Sed();

	// fonction qui recherche s1 dans outfile et remplace par s2

	std::string ft_replace(size_t pos, size_t s1_len, const std::string &s1,
		const std::string &s2, std::ifstream &input, std::ofstream &output);

	// //fonction qui remplace chaque occurence s1 par s2 dans outfile
	std::string Sed::ft_Sed(size_t pos, size_t s1_len, const std::string &s1,
		const std::string &s2, std::ifstream &input, std::ofstream &output);
};

#endif // SED_HPP