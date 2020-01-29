#include <iostream>
#include <string>
using namespace std;

class MeriClass{
    public:
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main()
{
    MeriClass bo;
    bo.setName("Meri class chalgi");
    cout << bo.getName();
    return 0;
}
