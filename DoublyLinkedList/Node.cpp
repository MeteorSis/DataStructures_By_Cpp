#include "Node.h"

template <typename T>
Node<T>::Node(Node<T> *const prev, const T &data, Node<T> *const next)
	: prev(prev), data(data), next(next) {}