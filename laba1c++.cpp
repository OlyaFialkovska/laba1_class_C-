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
    public:
    float a,b,c;
    vector2d(): a(0.0f),b(0.0f),c(0.0f)//default
    {
        //...
    }
    vector2d(const vector2d &another)://copying
    a(another.a),
    b(another.b),
    c(another.c)
    {
        //...
    }
    vector2d(float i,float k,float j)://initialization with a pair of real numbers
    a(i), b(k),c(j)
    {
        //...
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
    vector2d constructoranother(3.5,6.7,8.9);

    return 0;
}