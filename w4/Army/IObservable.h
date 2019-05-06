#ifndef IOBSERVABLE_H
#define IOBSERVABLE_H

class Unit;

class IObservable {
	public:
		virtual void addObserver(Unit* newObserver) = 0;
		virtual void notifyObservers() = 0;
};

#endif // IOBSERVABLE_H