// (c) Dorothy R. Kirk.  All Rights Reserved.
// Purpose:  Illustrates pointers are arguments to functions

#include <iostream>
using std::cout;   // preferred to: using namespace std;
using std::endl;


void TryToAddOne(int);
void AddOne(int *);

int main()
{
   int x = 10;
   int *y = nullptr;

   y = new int;
   *y = 15;

   cout << "x: " << x << " and *y: " << *y << endl;

   TryToAddOne(x);  // unsuccessful, call by value
   TryToAddOne(*y);
   cout << "x: " << x << " and *y: " << *y << endl;

   AddOne(&x);   // successful, passing a pointer 
   AddOne(y);
   cout << "x: " << x << " and *y: " << *y << endl;

   delete y;    // relinquish the heap memory

   return 0;
}

void TryToAddOne(int arg)
{
   arg++;
}

void AddOne(int *arg)
{
   (*arg)++;
}

