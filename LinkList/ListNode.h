#pragma once
template<class T>
class ListNode
{
public:
	void setData(T data);
	T getData(void);

private:
	T data;
	ListNode* previousNode_ptr;
	ListNode* nextNode_ptr;

};

template<class T>
inline void ListNode<T>::setData(T data)
{
	data = this->data;
}

template<class T>
inline T ListNode<T>::getData(void)
{
	return data;
}
