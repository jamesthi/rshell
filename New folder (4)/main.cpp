#include<iostream>
#include "Sort.h"
#include "Container.h"
#include "VectorContainer.h"
#include "BubbleSort.h"
#include "Base.h"
#include "Mult.h"
#include "Div.h"
#include "Sqr.h"
#include "Sub.h"
#include "Add.h"
#include "Op.h"
#include "Ceiling.h"
#include "Floor.h"
#include "AbsoluteValue.h"
#include "SelectionSort.h"
#include "ListContainer.h"
using  namespace std ;
int main ()  {
 Op * op7  =  new  Op(7);
 Op * op4  =  new  Op(5);
 Op * op3  =  new  Op(3);
 Op * op2  =  new  Op(2);
 Mult * A  =  new  Mult(op7,op4); 
 Add * B  =  new  Add(op3,A); 
 Sub * C  =  new  Sub(B,op2); 
 Sqr * D  =  new  Sqr(C);
 Div * E = new Div(op4, op2);
 Ceiling * F = new Ceiling(E);
 Floor * G = new Floor(E);
 Op * op8 = new Op(-2);
 AbsoluteValue * H = new AbsoluteValue(op8);
 ListContainer * container  =  new ListContainer(); 
 container->add_element(A); 
 container->add_element(B); 
 container->add_element(C);  
 container->add_element(D);
 container->add_element(E);
 container->add_element(F);
 container->add_element(G);
 container->add_element(H);
 cout << "Container Before Sort: " << endl ; 
 container->print();
 cout << "Container After Sort: " << endl ; 
 container->set_sort_function( new SelectionSort()); 
 container->sort();
 container->print();
};
