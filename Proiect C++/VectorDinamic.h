#pragma once
//tip de data generic (pentru moment este intreg)

typedef int TElem;

class IteratorVectorDinamic;


class VectorDinamic {

private:
	/* aici e reprezentarea */
    int max_size;
    int size;
    TElem *elems;
	void redim();

public:
        friend class IteratorVectorDinamic;

		VectorDinamic (int max_size);

		int dim() const;

		TElem element(int i) const;

		TElem modifica(int i, TElem e);

		void adaugaSfarsit(TElem e);

		void adauga(int i, TElem e);

		TElem sterge(int i);

		IteratorVectorDinamic iterator();

		~VectorDinamic();
};







