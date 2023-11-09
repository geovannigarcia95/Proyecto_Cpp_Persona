#include <iostream>
using namespace std;
class Persona{   
	private:   
		int edad;
		string nombre;
		string apellido;
		string oir ;
	public:   
		Persona(int,string,string,string);  
		void leer();  
		void aprender();    
		void escuchar();
		void futbol();
};
Persona::Persona(int _edad,string _nombre,string _apellido,string _oir)
{
	cout<<"introduce tu edad: ";
	cin>>edad;
	cout<<"introduce tu nombre: ";
	cin>>nombre;
	cout<<"introduce tu apellido: ";
	cin>>apellido;
	cout<<"me gusta ver: ";
	cin>>oir;
}
void Persona::leer(){
	cout<<"Soy "<<nombre<< " "<<apellido<<" y estoy leyendo C++"<<endl;
}
void Persona::aprender(){
	cout<<"Soy "<<nombre<<" y estoy aprendiendo C++ y tengo "<<edad<<endl;
}
void Persona::escuchar(){
	cout<<"Soy "<<nombre<< " "<<"me gusta escuchar "<<oir<< " "<<"y me gusta escuchar musica mientras duermo"<<endl;
}
void Persona::futbol(){
	cout<<"Soy "<<nombre<< " "<<"tengo "<<edad<<" me encata ver el futbol con mis amigos y familiares "<<endl;
}
int main(){
	int edad;
	string nombre,apellido,oir;
		Persona p1 (edad,nombre,apellido,oir); 
		Persona p2 (edad,nombre,apellido,oir);
		Persona p3 (edad,nombre,apellido,oir);
		Persona p4 (edad,nombre,apellido,oir);
		;
		p1.leer();
		p2.aprender();
		p3.escuchar();
		p4.futbol();
}

//practica 9
//yoshio geovanni garcia lopez
