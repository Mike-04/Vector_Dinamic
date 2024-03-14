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
	return elems[i-1];
}



void VectorDinamic::adaugaSfarsit(TElem e) {
	/* de adaugat */
}


void VectorDinamic::adauga(int i, TElem e) {
	/* de adaugat */
}


TElem VectorDinamic::modifica(int i, TElem e) {
	/* de adaugat */
	return -1;
}


TElem VectorDinamic::sterge(int i) {
	/* de adaugat */
	return -1;
}

IteratorVectorDinamic VectorDinamic::iterator() {
	return IteratorVectorDinamic(*this);
}



