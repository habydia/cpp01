#include "Sed.hpp"

// ouvre le fichier source qui contiens les modifs,
// copie sont contennue dans _output_file
// puis ferme le fichier source
// cherche s1 dans outfile et remplace par s2

int	main(int argc, char **argv)
{
	Sed mySed("filename.txt", "filename.txt.replace");

	if (argc == 4)
	{
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		size_t pos = 0;
		size_t s1_len = s1.length();

		mySed.ft_replace(pos, s1_len, s1, s2, mySed._input_file,
			mySed._output_file);
	}
	else
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
}