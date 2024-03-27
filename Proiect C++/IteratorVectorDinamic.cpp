#include "IteratorVectorDinamic.h"
#include "VectorDinamic.h"


IteratorVectorDinamic::IteratorVectorDinamic(const VectorDinamic& _v) : v(_v) {
	current = 0;
}



void IteratorVectorDinamic::prim() {
	current= 0;
}



bool IteratorVectorDinamic::valid() const{
	if (current < v.dim())
        return true;
	return false;
}



TElem IteratorVectorDinamic::element() {
    return v.elems[this->current];
}



void IteratorVectorDinamic::urmator() {
	current++;
}

