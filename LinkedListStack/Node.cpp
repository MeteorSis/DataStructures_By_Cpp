#include "Node.h"

template <typename T>
Node<T>::Node(const T &data, Node<T>* const next)
	: data(data), next(next) {}