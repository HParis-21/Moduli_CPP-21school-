#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv)
{
	std::string strBuff;
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::ifstream openFile; //поток для чтения
	std::ofstream saveFile; //поток для записи
	std::string::size_type i = 0;

	if (argc != 4 || std::string(s1).empty() || std::string(s2).empty())
	{
		std::cout << "Invalid arguments" << std::endl;
		return (1);
	}
	openFile.open(filename);
	if (!openFile.is_open())
	{
		std::cout << "Cannot open \"" << filename << "\"" << std::endl;
		return (1);
	}
	if ((openFile.peek()) == EOF)
	 {
		std::cout << "File is empty!" << std::endl;
		openFile.close();
		return (1);
	}
	if (!(filename.find(".", 0) == std::string::npos))
		filename.erase(filename.find(".", 0));// если нашли точку то стираем все после неё
	filename.append(".replace");
	saveFile.open(filename);
	if (!saveFile.is_open())
	{
		std::cout << "Cannot create \"" << filename << "\"" << std::endl;
		openFile.close();
		return (1);
	}
	while (std::getline(openFile, strBuff))
	{
		while ( (i = strBuff.find(s1.c_str())) != std::string::npos)
		{
			strBuff.erase(i, strlen(s1.c_str())); // удаляется первая подстрока в буфере
			strBuff.insert(i,s2); // заменяется на вторую строку
			i += strlen(s2.c_str());//сдвигается cчетчик строки
		}
		saveFile << strBuff << "\n";
	}
	openFile.close();
	saveFile.close();
	return (0);
}
