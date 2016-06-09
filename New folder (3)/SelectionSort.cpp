#include "SelectionSort.h"
#include "Container.h"
#include <vector>
void SelectionSort::sort(Container* container) {
      int i, j, minIndex;
      int n = container->size();    
      for (i = 0; i < n - 1; i++) {
            minIndex = i;
            for (j = i + 1; j < n; j++) {
                  if(container->at(j)->evaluate() < container->at(minIndex)->evaluate()){
                        minIndex = j;
		}
	}
            if (minIndex != i) {
                  container->swap(i, minIndex);
            }
      }
}
