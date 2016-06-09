class Sort;

class Container;
#include"ListContainer.h"
#include"Container.h"
#include"Sort.h"
#include"Base.h"
using namespace std;
#include<list>
ListContainer::ListContainer() {
    list<Base *> list1();
    return;
}
ListContainer::~ListContainer() {
    while(!list1.empty()) delete list1.front(), list1.pop_front();
    return;
}
void ListContainer::add_element(Base* element) {
    list1.push_back(element);
}
void ListContainer::print() {
    list<Base*>::iterator it;
    for(it = list1.begin(); it != list1.end(); ++it) {
	Base* temp = *it;
        cout << temp->getChild() << " ";
    }
    cout << endl;
}
void ListContainer::sort() {
    if(sort_function == 0) {
	cout << "No sorting method was chosen!" << endl;
	}
    else {
	sort_function->sort(this);
	}
}
void ListContainer::swap(int i, int j) {
    Base* temp;
    list<Base*>::iterator it1;
    it1 = list1.begin();
    for(int a = 0; a < j; ++a) {
        ++it1;
    }
    list<Base*>::iterator it2;
    it2 = list1.begin();
    for(int a = 0; a < i; ++a) {
        ++it2;
    }
    temp = *it1;
    it1 = list1.erase(it1);
    list1.insert(it2, temp);
    temp = *it2;
    list1.erase(it2);
    list1.insert(it1, temp);
}
Base* ListContainer::at(int i) {
    list<Base*>::iterator it;
    it = list1.begin();
    for(int j = 0; j < i; ++j) {
        ++it;
    }
    Base* temp = *it;
    return temp;
}
int ListContainer::size() {
    return list1.size();
}
