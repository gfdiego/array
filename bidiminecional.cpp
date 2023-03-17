# incluir  <iostream> _ _
utilizando  el espacio de nombres  estándar ;

principal (){
	int código[ 5 ]={ 10 , 20 , 30 , 40 };
	
	cout<<codigo[ 0 ]<<endl;
	cout<<codigo[ 1 ]<<endl;
	cout<<codigo[ 2 ]<<endl;
	cout<<codigo[ 3 ]<<endl;
	codigo[ 4 ]= 50 ;
	cout<<codigo[ 4 ]<<endl;
	cout<< " ______________ " <<endl;
	para ( int i= 0 ;i< 5 ;i++){
		cout<<codigo[i]<<endl;
	}
	
	cout<< " --------- para 2 ------------ " <<endl;
	para ( int i: codigo)
    {
    	cout<<i<<endl;
    }
	
char nombre[ 30 ];
	cout<< " ingrese nombre: " ;
	// cin>>nombre;
	cin. obtener (nombre, 30 );
	
	cout<<nombre<<endl;

/*
	cadena nombre;
	datos int=0;
	cout<<"Dato:";
	cin>>datos;
	cin.ignorar();
	cout<<"Ingreso Nombre Completo:";
	getline(cin,nombre);
	cout<<nombre<<endl;
	*/

/*	cout<< " ________ Cadena ________ " <<endl;
	string semana[ 7 ]={ " Lunes " , " Martes " , " Miercoles " , " Jueves " , " Viernes " , " Sábado " };
	
	cout<<semana[ 0 ]<<endl;
	cout<<semana[ 1 ]<<endl;
	cout<<semana[ 2 ]<<endl;
	cout<<semana[ 3 ]<<endl;
	cout<<semana[ 4 ]<<endl;
	cout<<semana[ 5 ]<<endl;
	semana[ 6 ]= " Domingo " ;
	cout<<semana[ 6 ]<<endl;
	cout<< " ______________ " <<endl;
	para ( int i= 0 ;i< 7 ;i++){
		cout<<semana[i]<<endl;
	}
	cout<< " --- Bidimensionales--- " <<endl;
	int matriz[ 2 ][ 3 ]={{ 10 , 20 , 30 },{ 40 , 50 , 60 }};
	cout<< " 0,0 : " <<matriz[ 0 ][ 0 ]<<endl;
	cout<< " 0,1 : " <<matriz[ 0 ][ 1 ]<<endl;
	cout<< " 0,2 : " <<matriz[ 0 ][ 2 ]<<endl;
	cout<< " 1,0 : " <<matriz[ 1 ][ 0 ]<<endl;
	cout<< " 1,1 : " <<matriz[ 1 ][ 1 ]<<endl;
	cout<< " 1,2 : " <<matriz[ 1 ][ 2 ]<<endl;
		cout<< " --- Para --- " <<endl;
		para ( int i = 0 ;i< 2 ;i++ ){
		para ( int ii = 0 ;ii< 3 ;ii++ ){
			cout<<i<< " , " <<ii<< " : " <<matriz[i][ii]<<endl;
		
	}	
	}
	
	sistema ( " pausa " );
}
