#pragma once
#include <memory>

template <typename T>
class ForwardList
{
private:
	struct List {
		std::shared_ptr<List> next=nullptr;
	
		T field;
	};
	std::shared_ptr<List> First;
	std::shared_ptr<List> Last;


public:
	ForwardList(const T &input);
 void Add(const T &input);
	void Show();
};



