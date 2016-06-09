class Sort;

class Container;
#include"VectorContainer.h"
#include"Container.h"
#include"Sort.h"
#include"Base.h"
using namespace std;
#include<vector>
VectorContainer::VectorContainer() {
    vector<Base *> vec();
    return;
}
VectorContainer::~VectorContainer() {
    for(unsigned i = 0; i < vec.size(); ++i) {
        delete vec.at(i);
    }
    return;
}
void VectorContainer::add_element(Base* element) {
    vec.push_back(element);
}
void VectorContainer::print() {
    for(unsigned i = 0; i < vec.size(); ++i) {
        cout << vec.at(i)->getChild() << " ";
    }
    cout << endl;
}
void VectorContainer::sort() {
    if(sort_function == 0) {
	cout << "No sorting method was chosen!" << endl;
	}
    else {
	sort_function->sort(this);
	}
}
void VectorContainer::swap(int i, int j) {
    Base *temp;
    temp = vec.at(i);
    vec.at(i) = vec.at(j);
    vec.at(j) = temp;
}
Base* VectorContainer::at(int i) {
    return vec.at(i);
}
int VectorContainer::size() {
    return vec.size();
}
