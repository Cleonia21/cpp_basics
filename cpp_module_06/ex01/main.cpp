# include <iostream>
# include <string>
# include "serialization.h"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

/*
Используйте serialize() для адреса объекта Data и передайте
его возвращаемое значение в deserialize(). Затем убедитесь,
что возвращаемое значение deserialize() сравнивается с исходным указателем.
*/

int main(void)
{
	uintptr_t a = 10;
	Data data;
	Data *data_ptr = new Data;

	std::cout	<< deserialize(serialize(&data)) << "\n"
				<< &data << "\n\n";

	std::cout	<< deserialize(serialize(data_ptr)) << "\n"
				<< data_ptr << "\n\n";

	std::cout	<< serialize(deserialize(a)) << "\n"
				<< a << "\n\n";
}
