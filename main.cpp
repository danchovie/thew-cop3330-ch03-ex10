/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Thew
 */
#include <iostream>
using namespace std;

int main() {
  //char for operation
  //the book said a String, but like...why?
  char operation;
  //doubles for user input numbers and result from operation
  double op1, op2, result;
  //take inputs for operation and operators
  cin>>operation;
  cin>>op1;
  cin>>op2;
  //if user said +, then show result of adding operators
  if(operation=='+'){
    result = op1+op2;
    cout<<result;
  }
  //if user said -, show result of subtracting operators
  else if(operation=='-'){
    result = op1-op2;
    cout<<result;
  }
  //if user said *, show result of multiplying operators
  else if(operation=='*'){
    result = op1*op2;
    cout<<result;
  }
  //if user said /, show result of dividing operators
  else if(operation=='/'){
    result = op1/op2;
    cout<<result;
  }
  //if user put bogus operation, show error message
  else{
    cout<<"Error. Try again.\n";
  }
} 