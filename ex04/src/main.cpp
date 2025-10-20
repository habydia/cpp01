#include "Sed.hpp"

// ouvre le fichier source qui contiens les modifs,
// copie sont contennue dans _output_file
// puis ferme le fichier source
// cherche s1 dans outfile et remplace par s2

int	main(int argc, char **argv)
{
	
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string outfile_name = std::string(argv[1]) + ".replace";

		//constructor, ouvrir le fichier source, creer sa copie
		Sed mySed(filename, outfile_name);
		size_t pos = 0;
		size_t s1_len = s1.length();

		//fonction qui copie filename dans outfile et recherche s1 dans outfile et remplace par s2
		mySed.ft_replace(pos, s1_len, s1, s2, mySed.input_file, mySed.output_file);
	}
	else
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
}