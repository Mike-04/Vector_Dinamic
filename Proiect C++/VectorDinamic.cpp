#include "VectorDinamic.h"
#include "IteratorVectorDinamic.h"
#include <exception>

using namespace std;

void VectorDinamic::redim() {
	/* de adaugat */
    TElem *eNou = new int[2 * max_size];
    for (int i = 0; i < max_size; i++)
        eNou[i] = elems[i];
    max_size *= 2;
    delete[] elems;
    elems = eNou;
}


VectorDinamic::VectorDinamic(int cp) {
	//dinamically alocate memory for the array
    elems = new TElem[cp];
    max_size = cp;
    size = 0;


}



VectorDinamic::~VectorDinamic() {
	delete[] elems;
}



int VectorDinamic::dim() const{
    return size;
}



TElem VectorDinamic::element(int i) const{
	return elems[i];
}



void VectorDinamic::adaugaSfarsit(TElem e) {
	if(size==max_size)
        redim();
    this->elems[size++] = e;
}


void VectorDinamic::adauga(int i, TElem e) {
	if(size==max_size)
        redim();
    for(int j = size; j > i; j--)
        this->elems[j] = this->elems[j-1];
    this->elems[i] = e;
    size++;
}


TElem VectorDinamic::modifica(int i, TElem e) {
	/* de adaugat */
    TElem old = this->elems[i];
    this->elems[i] = e;
    return old;
}


TElem VectorDinamic::sterge(int i) {
	/* de adaugat */
    TElem old = this->elems[i];
    for(int j = i; j < size; j++)
        this->elems[j] = this->elems[j+1];
    if (size>0)
        size--;
    return old;
}

IteratorVectorDinamic VectorDinamic::iterator() {
	return IteratorVectorDinamic(*this);
}



