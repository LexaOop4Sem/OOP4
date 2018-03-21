#pragma once
#include <memory>
using namespace std;

template <typename T>
class ForwardList
{
private:
	struct List {
		shared_ptr<List> next = nullptr;

		T field;
	};
	shared_ptr<List> First;
	shared_ptr<List> Last;


public:
	ForwardList(const T &input);
	void Add(const T &input);
	void Show();
	void Del(const T &input);
	shared_ptr<typename ForwardList<T>::List> ForwardList<T>::Search(const T & input);
};


//template<typename T>
//List * ForwardList<T>::Search(const T & input)
//{
//	return nullptr;
//}
