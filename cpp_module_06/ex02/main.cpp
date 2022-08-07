# include <iostream>
# include <string>
# include <unistd.h>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include "typeIdentifier.hpp"

int main()
{
    typeIdentifier _idnt;
    Base *rnd;

    for (int i = 0; i < 5; i++)
    {
        rnd = _idnt.generate();
        _idnt.identify(rnd);
        _idnt.identify(*rnd);
        delete rnd;
    }
}