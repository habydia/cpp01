#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>
# include <string>

class Sed
{
  public:
	std::ofstream output_file; // fichier qui va contenir les modifs
	std::ifstream input_file;  // fichier source

	std::string s1; // chaine a remplacer
	std::string s2; // chaine de remplacement
	size_t s1_len;  // longueur de la chaine a remplacer
	size_t pos;     // position de la chaine a remplacer

	// constructor ouvre le fichier qui contiens les modifs
	Sed(const std::string &input_filename, const std::string &output_filename);
	// destructor ferme les fichiers
	~Sed();

	// fonction qui recherche s1 dans outfile et remplace par s2

	std::string ft_replace(size_t pos, size_t s1_len, std::string &s1,
		std::string &s2, std::ifstream &input, std::ofstream &output);
};

#endif // SED_HPP