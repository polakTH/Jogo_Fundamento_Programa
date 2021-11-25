#include "Gerenciador_Colisões.h"

Gerenciador_Colisões::Gerenciador_Colisões()
{
	LIs = new Lista<Inimigo>;
}

bool Gerenciador_Colisões::Colidindo(Entidade* eu, Entidade* alvo)
{
	if(eu->x + eu->getSprite()->getSize().x <= alvo->x)
	{
		return false;
	}
	if (eu->x >= alvo->x + alvo->getSprite()->getSize().x)
	{
		return false;
	}
	if (eu->y + eu->getSprite()->getSize().y <= alvo->y)
	{
		return false;
	}
	if (eu->y >= alvo->y + alvo->getSprite()->getSize().y)
	{
		return false;
	}
	return true;
}



