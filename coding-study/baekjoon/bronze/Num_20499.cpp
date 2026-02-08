#include <iostream>
#include <string>

int main(void)
{
    std::string KDA;

    std::cin >> KDA;

    int fk = KDA.find('/');
    std::string K = KDA.substr(0,fk);
    int ik = std::stoi(K);

    int fd = KDA.find('/',fk+1);
    std::string D = KDA.substr(fk+1,fd - (fk+1));
    int id = std::stoi(D);

    std::string A = KDA.substr(fd+1);
    int ia = std::stoi(A);

    if(ik + ia < id || id == 0)
    {
        std::cout << "hasu";
    }else
    {
        std::cout << "gosu";
    }

    return 0;
}