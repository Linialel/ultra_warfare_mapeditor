#include "stdafx.h"

float Distance_Euclidienne(sfVector2f _V1, sfVector2f _V2)
{
	float total = 0.0;
	total = (float)sqrt((_V2.x - _V1.x)*(_V2.x - _V1.x) + (_V2.y - _V1.y)*(_V2.y - _V1.y));
	return total;
}

int IsColor(sfVector2u _position, sfImage* _mask, int _r, int _g, int _b, int _a)
{
	if (_position.x > 0 && _position.x < sfImage_getSize(_mask).x && _position.y > 0 && _position.y < sfImage_getSize(_mask).y)
	{
		sfColor color1 = sfImage_getPixel(_mask, _position.x, _position.y);
		if (color1.r == _r && color1.g == _g && color1.b == _b && color1.a == _a)
		{
			return 1;
		}
	}
	return 0;
}