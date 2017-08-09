#pragma once

template <typename T>
struct Node
{
	Node<T> *prev;
	T data;
	Node<T> *next;
	Node(Node<T> *const prev, const T &data, Node<T> *const next);
};