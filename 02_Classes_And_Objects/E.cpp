#include<iostream>
using namespace std;
// Private Member Functions
class Sample{
    private:
        int n;
        void read();
    public:
        void update();
};
void Sample::update(){
    read(); //simple call , no object used
}
int main()
{
    
    return 0;
}