#include <iostream>

using namespace std;

class Programming{
public:

Programming()
{
    cout<<"I LOVE C++ LANGUAGE "<< endl;
}

Programming(string name)
{
    cout<<"I LOVE "<< name << endl;
}
    };

int main()
{
    Programming p1;
    Programming p2("KARTIK");


     return 0;
}
