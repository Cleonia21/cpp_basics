#include <iostream>

int main(int argc, char **argv)
{
    int j, i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 1;
    while (argc > 1)
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                argv[i][j] += ('A' - 'a');
            std::cout << argv[i][j];
            j++;
        }
        i++;
        argc--;
    }
    std::cout << std::endl;
    return (0);
}
