#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H

#include <iostream>

template <class Type>
class ArrayIterator {
	private:
		Type* array;
		size_t limit;
		size_t current;
	public:
		ArrayIterator(Type* value, size_t size) {
			this->array = value;
			this->limit = size - 1;
			this->current = 0;
		}
		~ArrayIterator() {

		};

		void next() {
			if ( over() ) {
				return;
			}
			this->current += 1;
		}
		void previous() {
			if ( this->current <= 0 ) {
				return;
			}
			this->current -= 1;
		}
		bool over() {
			return (this->current > this->limit);
		}
		const Type& value() const {
			return this->array[this->current];
		}
		void begin() {
			this->current = 0;
		}

		void operator++() {
			this->next();
		}
		void operator++(int) {
			this->operator++();
		}
		void operator--() {
			this->previous();
		}
		void operator--(int) {
			this->operator--();
		}
		int operator*() {
			return this->value();
		}

};

#endif // ARRAYITERATOR_H
