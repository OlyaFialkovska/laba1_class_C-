#include <iostream>
using namespace std;

void sumVector()
{

}
void differenceVector()
{
    
}
void scalarAndProduct()
{

}
void scalingVector()
{
    
}
void reflection()
{

}
void assignmentOperations()
{

}
void normalizationVector()
{

}
void lengthVector()
{

}
void accessIndividualCoordinates()
{

}
void rotationVector()
{

}
void calculationAngleBetweenTwoVectors()
{

}

class vector2d {
    private:
    float x,y;
    public:
    vector2d(): x(0.0f),y(0.0f)//default
    {
        //...
    }
    vector2d(const vector2d &another)://copying
    x(another.x),
    y(another.y)
    {
        //...
    }
    vector2d(float i,float j)://initialization with a pair of real numbers
    x(i), y(j)
    {
        //...
    }

    void out() const 
    {
        cout << "x = " << x << " y = " << y  << "\n";
    }


    
    ~vector2d()//destructor
    {
        //
    }
};
int main()
{
    vector2d constructorDefault;
    vector2d constructorcopy(constructorDefault);
    vector2d constructoranother(3.5,8.9);

    constructorDefault.out();
    constructorcopy.out();
    constructoranother.out();

    return 0;
}