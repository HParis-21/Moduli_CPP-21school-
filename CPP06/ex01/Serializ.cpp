#include "Serializ.hpp"

int randomNum(void) { return (rand() % 100000); }

std::string randomStr(void)
{
	int strLen = rand() % 10 + 1;
	std::string const alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string res(strLen, 'a');
	for (size_t i = 0; i < res.length(); i++)
		res[i] = alphabet[rand() % 52];
	return (res);
}

void* serialize(void)
{
	Data *data = new Data();

	data->s1 = randomStr();
	data->n = randomNum();
	data->s2 = randomStr();

	std::cout << "data->s1 = " << data->s1 << std::endl;
	std::cout << "data->n = " << data->n << std::endl;
	std::cout << "data->s2 = " << data->s2 << std::endl;

	return (reinterpret_cast<void*>(data));
}

Data* deserialize(void *raw)
{
	Data *data = new Data();

	data = reinterpret_cast<Data*>(raw);

	return (data);
}
