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


 //template <typename T>
 //void   ForwardList<T>::Del(const T &input) {
	//

 //}