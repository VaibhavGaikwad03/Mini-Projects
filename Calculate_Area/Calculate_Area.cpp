#include<iostream>
using namespace std;

class Area
{
    public:

    float areaOfRectangle(float, float);
    float areaOfSquare(float);
    float areaOfTriangle(float, float);
    float areaOfCircle(float);
    float areaOfTrapezoid(float, float, float);
    float areaOfEllipse(float, float);
};

/* 
##############################################################################
##
##  Function name : areaOfRectangle
##  Input : float, float
##  Output : float
##  Description : It is used to calculate the area of rectangle.
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 01-12-2022
##
##############################################################################
*/

float Area::areaOfRectangle(float fLength, float fWidth)        //to calculate area of rectangle
{
    if(fLength < 0)
    {
        fLength = -fLength;
    }

    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }

    return fLength * fWidth;
}

/* 
##############################################################################
##
##  Function name : areaOfSquare
##  Input : float
##  Output : float
##  Description : It is used to calculate the area of square.
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 01-12-2022
##
##############################################################################
*/

float Area::areaOfSquare(float fSide)                           //to calculate area of square
{
    if(fSide < 0)
    {
        fSide = -fSide;
    }

    return fSide * fSide;
}

/* 
##############################################################################
##
##  Function name : areaOfTriangle
##  Input : float, float
##  Output : float
##  Description : It is used to calculate the area of triangle.
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 01-12-2022
##
##############################################################################
*/

float Area::areaOfTriangle(float fBase, float fHeight)                  //to calculate area of triangle
{
    if(fBase < 0)
    {
        fBase = -fBase;
    }

    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }

    return (fBase * fHeight)/2;
}

/* 
##############################################################################
##
##  Function name : areaOfCircle
##  Input : float
##  Output : float
##  Description : It is used to calculate the area of circle.
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 01-12-2022
##
##############################################################################
*/

float Area::areaOfCircle(float fRadius)                                     //to calculate area of circle
{
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    return 3.141592653589793238 * (fRadius * fRadius);
}

/* 
##############################################################################
##
##  Function name : areaOfTrapezoid
##  Input : float, float, float
##  Output : float
##  Description : It is used to calculate the area of trapezoid.
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 01-12-2022
##
##############################################################################
*/

float Area::areaOfTrapezoid(float fBase1, float fBase2, float fHeight)      //to calculate area of trapezoid
{
    if(fBase1 < 0)
    {
        fBase1 = -fBase1;
    }

    if(fBase2 < 0)
    {
        fBase2 = -fBase2;
    }

    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }

    return ((fBase1 + fBase2)/2) * fHeight;
}

/* 
##############################################################################
##
##  Function name : areaOfEllipse
##  Input : float, float
##  Output : float
##  Description : It is used to calculate the area of ellipse.
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 01-12-2022
##
##############################################################################
*/

float Area::areaOfEllipse(float fMajorAxis, float fMinorAxis)           //to calculate area of ellipse
{
    if(fMajorAxis < 0)
    {
        fMajorAxis = -fMajorAxis;
    }

    if(fMinorAxis < 0)
    {
        fMinorAxis = -fMinorAxis;
    }

    return 3.141592653589793238 * (fMajorAxis * fMinorAxis);
}

/* 
##############################################################################
##
##  Function name : choice
##  Input : None
##  Output : None
##  Description : It is used to choose the options.
##  Author : Vaibhav Tukaram Gaikwad
##  Date : 01-12-2022
##
##############################################################################
*/


void choice()                                               //to choose the option (User Interactions)
{
    Area obj;
    char chChoice = '\0';

    cout<<"Hello, Welcome to Area Calculator...\n"<<endl;
    cout<<"Please choose the option from below : "<<endl;
    cout<<"1. Area of Rectangle"<<endl;
    cout<<"2. Area of Square"<<endl;
    cout<<"3. Area of Triangle"<<endl;
    cout<<"4. Area of Circle"<<endl;
    cout<<"5. Area of Trapezoid"<<endl;
    cout<<"6. Area of Ellipse"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<">_";
    cin>>chChoice;

    switch(chChoice)
    {
        case '1':
        {
            float fLength = 0.0f, fWidth = 0.0f;
            double dArea = 0.0;

            cout<<"Enter the data : "<<endl;
            cout<<"Length : ";
            cin>>fLength;
            cout<<"Width : ";
            cin>>fWidth;

            dArea = obj.areaOfRectangle(fLength, fWidth);

            cout<<"Area of Rectangle is : "<<dArea<<endl;
        }
        break;

        case '2':
        {
            float fSide = 0.0f;
            double dArea = 0.0;

            cout<<"Enter the data : "<<endl;
            cout<<"Side : ";
            cin>>fSide;

            dArea = obj.areaOfSquare(fSide);

            cout<<"Area of Square is : "<<dArea<<endl;
        }
        break;

        case '3':
        {
            float fBase = 0.0f, fHeight = 0.0f;
            double dArea = 0.0;

            cout<<"Enter the data : "<<endl;
            cout<<"Base : ";
            cin>>fBase;
            cout<<"Height : ";
            cin>>fHeight;

            dArea = obj.areaOfTriangle(fBase, fHeight);

            cout<<"Area of Triangle is : "<<dArea<<endl;
        }
        break;

        case '4':
        {   
            float fRadius = 0.0f;
            double dArea = 0.0;

            cout<<"Enter the data : "<<endl;
            cout<<"Radius : ";
            cin>>fRadius;

            dArea = obj.areaOfCircle(fRadius);

            cout<<"Area of Circle is : "<<dArea<<endl;
        }
        break;

        case '5':
        {
            float fBase1 = 0.0f, fBase2 = 0.0f, fHeight = 0.0f;
            double dArea = 0.0;

            cout<<"Enter the data : "<<endl;
            cout<<"Base 1 : ";
            cin>>fBase1;
            cout<<"Base 2 : ";
            cin>>fBase2;
            cout<<"Height : ";
            cin>>fHeight;

            dArea = obj.areaOfTrapezoid(fBase1, fBase2, fHeight);

            cout<<"Area of Trapezoid is : "<<dArea<<endl;
        }    
        break;

        case '6':
        {
            float fMajorAxis = 0.0f, fMinorAxis = 0.0f;
            double dArea = 0.0;

            cout<<"Enter the data : "<<endl;
            cout<<"Radius of Major Axis : ";
            cin>>fMajorAxis;
            cout<<"Radius of Minor Axis : ";
            cin>>fMinorAxis;

            dArea = obj.areaOfEllipse(fMajorAxis, fMinorAxis);

            cout<<"Area of Ellipse is : "<<dArea<<endl;
        }    
        break;

        case '7':
            cout<<"Thank you for using Area Calculator :)"<<endl;
            exit(0);
        break;

        default:
            cout<<"Invalid Option !!"<<endl;
    }
}

int main()                                              //entry point of the program
{
    choice();

    return 0;
}