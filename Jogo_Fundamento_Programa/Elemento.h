#pragma once
template <class TE> class Elemento
{
private:
	Elemento<TE>* pProx;
	TE* item;
public:
	Elemento();
	~Elemento();
	void SetProx(Elemento<TE>* pProx) { this->pProx = pProx; }
	void SetItem(TE* item) { this->item = item;}
	Elemento<TE>* getProx() { return pProx; }
	TE* getItem() { return item; }
};

template<class TE>
inline Elemento<TE>::Elemento()
{
	pProx = nullptr;
	item = nullptr;
}

template<class TE>
inline Elemento<TE>::~Elemento()
{
}
