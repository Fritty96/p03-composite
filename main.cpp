#include <iostream>
#include “bitmap.h”
#include <string>
#include <vector>

Using namespace std;


//Receives bitmap filename, opens and checks if file is valid. Print error message if invalid.
bool filevalid(string);
//Recieves bitmaps. Compares sizes against one another. Print error message if none are same size.
void checkfiles(Bitmap);
//Takes a bitmap, averages the colors to create grey, returns completed bitmaps. 
void averagecolor(Bitmap &)
//Recieves averaged bitmaps, combines, updates user for process, returns compilation.
void compile(Bitmap &)


int main(){

int i;
string userimage;
 do{
cout << "Enter BMP File Name" << endl;
cin >> userimage;
  if (userimage == 'Done' || userimage == 'done'){
    break;
    }
  else{
    filevalid();
    i++;
    }
 }
while ( i < 10);
  
return 0;
}

void filevalid(){

  
  
  
  
}


//Ask user for Filename
//check if filename valid.
//if invalid, print error message
//Ask again if under 10
//check files against one another
//if wrong size, disregard file
//Continue asking for file until user says ‘done’, or until 10
//If user says done, with two images of different sizes, print error message
//if user says done with one image, print error message
//once count is full or user says done with valid images,
//create vector of vectors of the images and change image colors using
//averages of each rbg value 
//combine files after rgb change
//print progress after each file is processed
//save complete combination
