#pragma once
#include "Elemento.h"
template <class TL> class Lista
{
private:
	Elemento<TL>* pPrimeiro;
	Elemento<TL>* pUltimo;
	int length;
public:
	Lista();
	~Lista();
	int Length() { return length; }
	TL* getItem(int ID)
	{
		Elemento<TL>* temp = pPrimeiro;
		if (temp == nullptr)return nullptr;
		if(ID == 0)
		{
			return temp->getItem();
		}
		for(int i = 0; i < ID; i++)
		{
			temp = temp->getProx();
			if (temp == nullptr)return nullptr;
		}
		return temp->getItem();
	}
	void Add(TL* item)
	{
		if(pPrimeiro == nullptr)
		{
			pPrimeiro = new Elemento<TL>;
			pPrimeiro->SetItem(item);
			pUltimo = pPrimeiro;
		}
		else
		{
			Elemento<TL>* temp = new Elemento<TL>;
			temp->SetItem(item);
			pUltimo->SetProx(temp);
			pUltimo = temp;
		}
		length++;
	}
	void Remove(TL* item)
	{
		Elemento<TL>* temp = pPrimeiro;
		Elemento<TL>* tempant = nullptr;
		while(temp->getItem() != item)
		{
			if (temp == nullptr)return;
			tempant = temp;
			temp = temp->getProx();
		}
		if(temp == pPrimeiro)
		{
			pPrimeiro = temp->getProx();
		}
		else if(temp == pUltimo)
		{
			tempant->SetProx(nullptr);
			pUltimo = tempant;
		}
		else
		{
			tempant->SetProx(temp->getProx());
		}
		delete temp;
		length--;
	}

};

template<class TL>
inline Lista<TL>::Lista()
{
	pPrimeiro = nullptr;
	pUltimo = nullptr;
	length = 0;
}

template<class TL>
inline Lista<TL>::~Lista()
{
}
