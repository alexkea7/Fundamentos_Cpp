//Representacion de la matriz adyacente de un grafo dirigido
#include<iostream>
using namespace std;
int fil = 10;
int col = 10;//La matriz adyacente inicialmente es 0

void mostrar_matriz(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << A[i][j] << " ";
      }
      cout << endl;
   }
}
void agregar_esquina(int (&A)[10][10], int i, int j){       //Para agregar esquinas a la matriz
   A[i][j] = 1;
}
void copiar(int (&A)[10][10],int (&b)[10][10],int v)
{
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
           b[i][j]=A[i][j];
}
void mult(int (&A)[10][10],int (&b)[10][10],int (&c)[10][10],int v)
{
    int sum=0;
    for(int i=0;i<v;i++){
       for(int j=0;j<v;j++){
           for(int k=0;k<v;k++)
                sum+=A[i][k]*b[k][j];
           c[i][j]=sum;
           sum=0;
       }
    }
}
int main(int argc, char* argv[]) {
	int v, n, k, i, j; 
	int **A = new int*[fil];
	A[0]=new int[fil*col];
	for(int j = 0;j < fil; ++j)
		A[j]=A[0]+j*col;
	int **b = new int*[fil];
	b[0]=new int[fil*col];
	for(int j = 0;j < fil; ++j)
		b[j]=b[0]+j*col;
	int **c = new int*[fil];
	c[0]=new int[fil*col];
	for(int j = 0;j < fil; ++j)
		c[j]=c[0]+j*col;
 	cout << "Ingrese el nro. de vertices del grafo dirigido: " << endl;
	cin >> v;  //son n vertices en el grafo dirigido
	//colección de pares ordenados
	agregar_esquina(0, 1);
	agregar_esquina(2, 0);
	agregar_esquina(4, 0);
	agregar_esquina(2, 2);
	agregar_esquina(3, 2); 
	agregar_esquina(0, 3);
	agregar_esquina(0, 4);
	mostrar_matriz(v);
 	cout<<"Ingrese el nro de esquinas: "<< endl;
 	cin>>n;
	copiar(A,b,v);
    	for(int i=0;i<n-1;i++)
    	{
        	mult(A,b,c,v);
        	copiar(c,b,v);
    	}
    	cout<<"A^"<<n<<"  = "<<endl;
	for(int i=0;i<v;i++)
    	{
       	 	for(int j=0;j<v;j++)
        	    cout<<c[i][j]<<" ";
        	cout<<endl;
    	}
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout <<"El numero de maneras que el vertice "<< j <<" puede unirse con el vertice "<< i <<" siguiendo "<< n <<" esquinas es: "<< c[i][j];
		cout<<endl;
	}
	}
	delete[] A[0];
	delete[] A;
	delete[] b[0];
	delete[] b;
	delete[] c[0];
	delete[] c;
}

