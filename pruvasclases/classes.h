/* 
 * File:   classes.h
 * Author: prog
 *
 * Created on 10 de agosto de 2017, 16:25
 */

#ifndef CLASSES_H
#define	CLASSES_H

#ifdef	__cplusplus
extern "C" {
#endif
    class Vehiculo{
public:
	Vehiculo();
	virtual ~Vehiculo();
	int color(int a);
};



#ifdef	__cplusplus
}
#endif

#endif	/* CLASSES_H */

