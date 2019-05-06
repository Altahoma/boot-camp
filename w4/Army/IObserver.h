#ifndef IOBSERVER_H
#define IOBSERVER_H

class Unit;

class IObserver {
	public:
		virtual void observe(Unit* target) = 0;
};

#endif // IOBSERVER_H
