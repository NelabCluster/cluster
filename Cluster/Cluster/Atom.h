#pragma once;
enum Atom_Type
{
	ATOM_None,
	ATOM_Fe = 1,
	ATOM_Cu,
	ATOM_Pt,
	ATOM_Pd,
	ATOM_Au,
	ATOM_Ag
};


class Atom
{
public:
	double x;
	double y;
	double z;
	int note;
};