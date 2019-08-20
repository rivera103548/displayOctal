//
//  main.cpp
//  displayOctal
//
//  Created by Alexis on 8/20/19.
//  Copyright © 2019 Alexis. All rights reserved.
//

#include <iostream>
void displayOctal (int);
using namespace std;


int main(){//Program starts with a main function
//Print stattement
    cout << "Result ";
    displayOctal (100);//calls the displayOctal() by passing 100 as argument
    cout << endl;
    //return statement;
    return 0;
}

//____________________________________________________//

void displayOctal(int n)
{
    if(n > 0)
    {
        if (n / 8 > 0)
            displayOctal(n / 8);
        cout << n % 8;
    }// end if
}//end displayOctal
