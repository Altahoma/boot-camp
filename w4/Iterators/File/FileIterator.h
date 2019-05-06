#ifndef FILEITERATOR_H
#define FILEITERATOR_H

#include <iostream>
#include <cstdlib>
#include <fstream>

class OutOfMemory {};

template <class Type>
class FileIterator {
	private:
		std::ifstream file;
		Type* pointer;
		size_t current;
		size_t size;
	public:
		FileIterator(const char* fileName) : file(fileName), current(0), size(100) {
			this->pointer = (Type*)malloc(size*sizeof(Type));
			if ( this->pointer == NULL ) {
				throw OutOfMemory();
			}

			if ( this->file.is_open() ) {
				this->file >> *pointer;
			}
		}
		~FileIterator() {

		}

		bool over() {
			return this->file.eof();
		}
		void next() {
			if ( this->over()) {
				return;
			}
			if ( this->current == this->size ) {
				this->size += 100;
				Type* newPointer = (Type*)realloc(this->pointer, this->size*sizeof(Type));
				if ( newPointer == NULL ) {
					throw OutOfMemory();
				}
				this->pointer = newPointer;
			}
			this->current += 1;
			this->file >> this->pointer[this->current];
		}
		const Type& value() const {
			return this->pointer[this->current];
		}

		void operator++() {
			this->next();
		}
		void operator++(int) {
			this->operator++();
		}
		const Type& operator*() {
			return this->value();
		}
};

#endif // FILEITERATOR_H