#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
class gks
{
public:
    string s;
    float y;
    float gk(float x){
    
        if  (x>=-10 && x<=-6) y=sqrt(4-pow((x+8),2))-2;
            else if (x>-6 && x<=2) y=0.5*x+1;
            else if (x>2 && x<=6) y = 0;
        else y = pow((x-6),2);
    return y;
}
    void vigr()
    {
        ofstream prout("text.txt");
        for (float x=-10; x<=8; x++)
            {
             y = gk(x);
             prout << "x=" << x << "\ty=" << y <<endl;   
            };
        prout.close();
    }
    void zagrus()
    {
        ifstream prin("text.txt");
        while (getline(prin, s))
        {
            cout << s;
            cout << "\n";
        };
        prin.close();
    }
};

int main()
{
    gks gks1;
    gks1.vigr();
    gks1.zagrus();
}