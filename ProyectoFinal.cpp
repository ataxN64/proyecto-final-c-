#include<iostream>
#include<conio>
#include<stdio> // contiene funcion gets
#include<ctype> //contiene funcion toupper
#include<stdlib> //contiene funcion exit

int opcion, opc1;
void menuPrincipal();
void menuIngreso();
void IngresoEstudiante();
void IngresoCatedratico();
void IngresoCursos();

void main(){

	menuPrincipal();
	getch();
}


void menuPrincipal(){

	clrscr();
	cout<<"MENU PRINCIPAL\n";
	cout<<"1. Ingreso \n";
	cout<<"2. Busqueda \n";
	cout<<"3. Salir \n\n";
	cout<<"Opci"<<char(162)<<"n: ";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			menuIngreso();
		break;

		case 2:
			exit(0);
		break;  

	}
}


void menuIngreso(){

	clrscr();
	int op1, op2;

	cout<<"MENU INGRESO\n";
	cout<<"1. Estudiante \n";
   cout<<"2. Catedr"<<char(160)<<"tico\n";
   cout<<"3. Curso\n";
	cout<<"4. Regresar al men"<<char(163)<<" anterior \n\n";
	cout<<"Opci"<<char(162)<<"n: ";
	cin>>opc1;
	switch(opc1)
	{

		case 1:
      		IngresoEstudiante();
      	break;

      	case 2:
      		IngresoCatedratico();
      	break;

      	case 3: 
      		IngresoCursos();
      	break;

		case 4:
			menuPrincipal();
		break;


	}
}


//ingreso de estudiantes 
void IngresoEstudiante(){


   char PrimerNombre[30], SegundoNombre[30], PrimerApellido[30], SegundoApellido[30];

   cout<<"Primer Nombre: ";
   gets(PrimerNombre)  ;

   cout<<"Segundo Nombre: ";
   gets(SegundoNombre);

   cout<<"PrimerApellido: ";
   gets(PrimerApellido);

   cout<<"SegundoApellido: ";
   gets(SegundoApellido);

}

//Ingreso de datos catedratico
void IngresoCatedratico(){
	char PrimerNombre[30], SegundoNombre[30], PrimerApellido[30], SegundoApellido[30];

	cout<<"Primer Nombre : " ;
	gets(PrimerNombre);

	cout<<"Segundo Nombre : " ;
	gets(SegundoNombre);

	cout<<"Primer Apellido : ";
	gets(PrimerApellido);

	cout<<"Segundo Apellido :";
	gets(SegundoApellido); 
}


//Ingreso de datos Cursos
void IngresoCursos(){
	char PrimerCurso[50], SegundoCurso[50], TercerCurso[50], CuartoCurso[50], QuintoCurso[50];

	cout<<"Ingrese el Primer Curso : ";
	gets(PrimerCurso);

	cout<<"Ingrese el Segundo Curso : ";
	gets(PrimerCurso);

	cout<<"Ingrese el Tercer Curso : ";
	gets(PrimerCurso);

	cout<<"Ingrese el Cuarto Curso : ";
	gets(PrimerCurso);

	cout<<"Ingrese el Quinto Curso : ";
	gets(PrimerCurso);

}
