#include <iostream>
#include <thread>
#include <chrono>

int main(int argc, char *argv[])
{

//dataType *pointerName;
int num = 10;
int *ptr_ex = &num;  // Pointer 'ptr' now points to the memory address of 'num'

int &ref = num; // Reference 'ref' is now an alias of 'num'

std::cout<< *ptr_ex;


// A constant pointer means the pointer itself cannot change the address it 
// holds after initialization, but the value at that address can still be modified.
// You cannot change what it points to.
// You can change the value at the address.
//
//Constant Pointer
int x = 10;
int y = 20;
int* const ptr = &x;   // Constant pointer to x

*ptr = 15;             // ✅ Allowed: we can change the value of x
// ptr = &y;           // ❌ Error: cannot make ptr point to y




//Pointer to Constant

int x = 10;
int y = 20;
const int* ptr_ne = &x;   // Pointer to constant int

// *ptr_ne = 15;          // ❌ Error: cannot modify x through ptr
ptr_ne = &y;              // ✅ Allowed: can point to another variable

// You can change what it points to.
// You cannot change the value at the address through this pointer.

return 0;
}
