#pragma once
#include <memory>

template <typename T>
class ForwardList
{
private:
	struct List {
		List *next;
		T field;
	};
	List *First, *Last;

public:
	ForwardList(const T &input);
 void Add(const T &input);
	void Show();
};



