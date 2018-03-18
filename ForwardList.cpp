#include "ForwardList.h"
#include <memory>
using namespace std;

template<typename T>
ForwardList<T>::ForwardList(const T input)
{
	 List* temp = new List();

	 temp->next = nullptr;
	 temp->field = input;

	 First = temp;
	 Last = temp;
}

 template <typename T>
 void   ForwardList<T>::Add(T &input) {
	 List* temp = new List();
	 Last->next = temp;
	 Last = temp;

	 temp->field = input;
 }

 
 template <typename T>
 void   ForwardList<T>::Show() {
	/* T *current=First

	 do {
	 
		 cout << current->field;

	 } while (current->next != nullptr);*/
 
 }