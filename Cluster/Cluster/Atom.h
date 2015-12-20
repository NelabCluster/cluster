#pragma once;
enum ATOM_TYPE
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
	double _x;
	double _y;
	double _z;
	int _note;

	void SetCood(int x,int y, int z);
	vector<double> GetCood();
	void SetNote(int note);
	int GetNote();
};