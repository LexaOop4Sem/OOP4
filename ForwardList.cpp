#include "ForwardList.h"
#include <memory>
using namespace std;

 template<typename T>
ForwardList<T>::ForwardList(const T &input)
{
	shared_ptr<List> temp(new List());
	 temp->next = nullptr;
	 temp->field = input;

	 First = temp;
	 Last = temp;
}

 template <typename T>
 void ForwardList<T>::Add(const T &input) {
	
	 std::shared_ptr<List> temp(new List());
	 Last->next = temp;
	 Last = temp;

	 temp->field = input;
 }


 
 template <typename T>
 void   ForwardList<T>::Show() {
	 std::shared_ptr<List> current;
	 current = First;
	 do {
		 cout << current->field << endl;
		 current = current->next;
	 } while (current != nullptr);
 
 }


 template <typename T>
 void ForwardList<T>::Del(const T &input) {
	 shared_ptr<List> prev = Search(input);
	 if (prev == Last) {
		 return;
	 }
	 else {
		 if (prev==First) {//if del first item
			 if (First->next!=nullptr) {
				 First = First->next;
				 return;
			 }
			 else {
				 First = nullptr;
				 cout << "List is Empty" << endl;
				 return;
			 }
		 }
		 else if (prev->next == Last) {
			 prev->next = nullptr;
			 Last = prev;
			 cout <<"deleted"<< endl;
		 }
		 else {
			 prev->next = prev->next->next;
			 cout << "deleted" << endl;
		 }


	 }
 }


template<typename T>
shared_ptr<typename ForwardList<T>::List> ForwardList<T>::Search(const T & input) {
	shared_ptr<List> current;
	current = First;
	if (First->field == input) {
		 return First; 
	}
	else {
		do {
			if (current->next->field == input) {
				cout << "detected" << endl;
				return current;
			}
			current = current->next;
		} while (current->next != nullptr);

	}

		cout << "not found" << endl;
	
	return current;
	
}


template<typename T>
void ForwardList<T>::operator[](const int &n) {
	int count=0;
	shared_ptr<List> current;
	current = First;
	while (current != Last) {
		current = current->next;
		count++;
	}
	current = First;
	if ((n <= -1) || (n > count-1)) {
		cout << "out of range" << endl;
		return;
	}
	else {
		for (int i = 0; i < n; i++) {
			current = current->next;
		}
	}
	cout << current->field;
	return;
}
