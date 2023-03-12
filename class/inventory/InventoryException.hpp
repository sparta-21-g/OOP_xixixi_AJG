#ifndef INVENTORYEXCEPTION_H
#define INVENTORYEXCEPTION_H

#include <exception>
using namespace std;

struct PlayerCardFullException : public exception  {
	const char* what() const throw() {
		return "Kartu Player Sudah Penuh";
	}
};

struct PlayerCardEmptyException : public exception  {
	const char* what() const throw() {
		return "Kartu Player Sudah Kosong";
	}
};

struct TableCardFullException : public exception  {
	const char* what() const throw() {
		return "Kartu di Meja Sudah Penuh";
	}
};

struct CardNotFoundException : public exception  {
	const char* what() const throw() {
		return "Kartu Tidak Ada Di Meja";
	}
};

#endif