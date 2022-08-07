# include <iostream>
# include <string>
# include <limits>
# include "TypeConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "invalid input" << std::endl;
    else
    {
        TypeConverter a;
        a.convertStr(argv[1]);
    }

    // float a = 632568734.0f;
    // std::cout << (int)a << '\n'
    //             << static_cast<int>(a) << '\n';

    return (0);
}
