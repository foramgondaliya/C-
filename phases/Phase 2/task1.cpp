#include <iostream>
using namespace std;

void Table(int num, int start,int end)
{
    for(int i=start; i <= end; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}

int main()
{
    Table (7,1,10);
    return 0;
}
