#include <iostream>


int main()
{
    int n,y;
    std::cin >> n;
    y=n/2;
    for (int i=1;i<=y;i++)
    {
        if (n%i==0)
        std::cout << i << '\n';

    }
    return 0;
}
