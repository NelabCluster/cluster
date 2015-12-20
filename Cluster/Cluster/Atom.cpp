#include "StdAfx.h"
#include "Atom.h"

void Atom::SetCood(int x,int y, int z)
{
	_x = x;
	_y = y;
	_z = z;
}

vector<double> Atom::GetCood()
{
	vector<double> cood(3);
	cood[0] = _x; cood[1] = _y; cood[2] = _z;
	return cood;
}

void Atom::SetNote(int note)
{
	_note = note;
}

int Atom::GetNote()
{
	return _note;
}