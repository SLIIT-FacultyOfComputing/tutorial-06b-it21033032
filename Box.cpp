#include "Box.h"
#include<iostream>


// Implement setters and getters
void Box::setDetails(int l ,int w , int h){


Width = w ;
Height = h;
Length = l;

}


int Box:: getHeight(){

return  Height ;


}


int Box:: getLength(){

return  Length;

 }

int Box:: getWidth(){

return Width;

 }

// Implemenet the calcVolume() unction
int Box::calcVolume() {

Ans = Length * Width * Height;
return Ans;

}
