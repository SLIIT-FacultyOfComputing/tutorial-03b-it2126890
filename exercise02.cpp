#include <iostream>

//Use namespaces
using namespace std;

//Function prototype
int volume(int height, int width, int length);

int main() {

  // Define Veriables
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;

  //Get inputs from user
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
     cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;

  //Calculation
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);

  //Display Results
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the Volume() function here

int volume(int height, int width, int length)
{
  int vol ;

  vol = height * width * length ;

  return vol ;
}