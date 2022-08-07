# include <iostream>
# include "Fixed.hpp"

// 2^24 = 16777216
// 2^8 = 256

int main()
{
	Fixed fixed_nums[10] =
	{
		1,
		0,
		1.1f,
		-23.3232f,
		-1234.4321f,
		475809.0f,
		42.232838f,
		139091,
		23423,
		42.42f
	};

	float float_nums[10] =
	{
		1,
		0,
		1.1f,
		-23.3232f,
		-1234.4321f,
		475809.0f,
		42.232838f,
		139091,
		23423,
		42.42f
	};

	for (int i = 0; i < 10; i++)
	{
		std::cout	<< "in fixed/float: " << fixed_nums[i]
					<< "/" << float_nums[i] << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (fixed_nums[i] + fixed_nums[j] != float_nums[i] + float_nums[j])
				std::cout	<< fixed_nums[i] << " + " << fixed_nums[j]
							<< " in fixed/float: "
							<< fixed_nums[i] + fixed_nums[j] << "/"
							<< float_nums[i] + float_nums[j] << std::endl;
			if (fixed_nums[i] - fixed_nums[j] != float_nums[i] - float_nums[j])
				std::cout	<< fixed_nums[i] << " - " << fixed_nums[j]
							<< " in fixed/float: "
							<< fixed_nums[i] - fixed_nums[j] << "/"
							<< float_nums[i] - float_nums[j] << std::endl;
			if (fixed_nums[i] * fixed_nums[j] != float_nums[i] * float_nums[j])
				std::cout	<< fixed_nums[i] << " * " << fixed_nums[j]
							<< " in fixed/float: "
							<< fixed_nums[i] * fixed_nums[j] << "/"
							<< float_nums[i] * float_nums[j] << std::endl;
			if (fixed_nums[j] != 0)
			{
				if (fixed_nums[i] / fixed_nums[j] != float_nums[i] / float_nums[j])
					std::cout	<< fixed_nums[i] << " / " << fixed_nums[j]
							<< " in fixed/float: "
								<< fixed_nums[i] / fixed_nums[j] << "/"
								<< float_nums[i] / float_nums[j] << std::endl;
			}
		}
	}


	for (int i = 0; i < 10; i++)
	{
		std::cout	<< "num: " << fixed_nums[i] << " --a/++a/a--/a++/a "
					<< --(fixed_nums[i]) << "/"
					<< ++(fixed_nums[i]) << "/"
					<< (fixed_nums[i])-- << "/"
					<< (fixed_nums[i])++ << "/"
					<< fixed_nums[i] << std::endl;
	}


	for (int i = 0; i < 10; i++)
	{
		Fixed a = fixed_nums[9];
		if (a < fixed_nums[i])
			std::cout << a << "  < " << fixed_nums[i] << std::endl;
		if (a > fixed_nums[i])
			std::cout << a << "  > " << fixed_nums[i] << std::endl;
		if (a <= fixed_nums[i])
			std::cout << a << " <= " << fixed_nums[i] << std::endl;
		if (a >= fixed_nums[i])
			std::cout << a << " >= " << fixed_nums[i] << std::endl;
		if (a == fixed_nums[i])
			std::cout << a << " == " << fixed_nums[i] << std::endl;
		if (a != fixed_nums[i])
			std::cout << a << " != " << fixed_nums[i] << std::endl;
	}


	for (int i = 0; i < 10; i++)
	{
		Fixed a = fixed_nums[9];
		std::cout	<< a << " and " << fixed_nums[i] << " min/max: "
					<< Fixed::min(a, fixed_nums[i]) << "/"
					<< Fixed::max(a, fixed_nums[i]) << std::endl;
	}

	return (0);
}