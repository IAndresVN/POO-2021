#include<iostream>
#include<ctime>
#include<cmath>
#include<stdlib.h>
using namespace std;
int i,j,random,rs;
int sudoku[4][4];
int main()
{
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
	    {
	    	// este do se utiliza para evitar que los numeros sean mayores a 4 o menores a 0 y que se repitan numeros en las columnas o las filas 
	    	do
	    	{
	            cout<<"ingrese el numero para la posicion["<<i<<"]["<<j<<"] de la matriz A (Debe ser entre 0 y 4)"<<endl;
	            cin>>sudoku[i][j];
	            rs=0;
	            if(sudoku[i][j]!=0)
	            {
	            	//este if Se utiliza para que el usuario ingrese numeros entre 0 y 4
	                if(sudoku[i][j]>4 or sudoku[i][j]<0)
	                {
	                    cout<<"*El numero ingresado no es valido, debe ser entre 0 y 4"<<endl<<endl;
	                    system("pause");
				        rs=2;	
				    }
				    //estos siguientes if se utiizan para evitar que haya mas de dos numeros en la misma subcuadricula
				    if(i!=2)
				    {
				    	if(j!=2)
				        {
				    	    if(j==0)
				    	    {
				                if(sudoku[i-1][j]>0 && sudoku[i-1][j+1]>0) 
				                {
					                cout<<"Se ha alcanzado la maxima cantidad de numeros elegibles en la subcuadricula, por favor rellene con 0"<<endl<<endl;
					                system("pause");
					                rs=2;
				                }
				            }
				            if(j==3)
				            {
				                if(sudoku[i-1][j]>0 && sudoku[i-1][j-1]>0 or sudoku[i][j-1]>0 && sudoku[i-1][j-1]>0 or sudoku[i-1][j]>0 && sudoku[i][j-1]>0) 
				                {
					                cout<<"Se ha alcanzado la maxima cantidad de numeros elegibles en la subcuadricula, por favor rellene con 0"<<endl<<endl;
					                system("pause");
					                rs=2;
				                }
						    }
				            if(j==1) 
				            {
				            	if(sudoku[i-1][j]>0 && sudoku[i-1][j-1]>0 or sudoku[i][j-1]>0 && sudoku[i-1][j-1]>0 or sudoku[i-1][j]>0 && sudoku[i][j-1]>0) 
				                {
					                cout<<"Se ha alcanzado la maxima cantidad de numeros elegibles en la subcuadricula, por favor rellene con 0"<<endl<<endl;
					                system("pause");
					                rs=2;
					            }
				            }
				        }
				    }
				    //Este if seutiliza para evitar que se repitan los numeros por columna
				    if(sudoku[i][j]==sudoku[i-1][j] or sudoku[i][j]==sudoku[i-2][j] or sudoku[i][j]==sudoku[i-3][j])
				    { 
					    cout<<"*El numero ingresado se encuentra repetido en la misma columna, por favor ingrese otro numero"<<endl<<endl;
					    system("pause");
					    rs=2;
				    }
				    //Los siguientes 3 if se utilizan para evitar que los numeros se repitan en la fila
				    if(j==1)
					{
					    if(sudoku[i][j]==sudoku[i][j-1])
					    {
					        cout<<"*El numero ingresado se encuentra repetido en la misma fila, por favor ingrese otro numero"<<endl<<endl;
					        system("pause");
					        rs=2;
					    }
					}
					if(j==2)
					{
					   if(sudoku[i][j]==sudoku[i][j-2] or sudoku[i][j]==sudoku[i][j-1])
					    {
					        cout<<"*El numero ingresado se encuentra repetido en la misma fila, por favor ingrese otro numero"<<endl<<endl;
					        system("pause");
					        rs=2;
					    } 	
					}
					if(j==3)
					{
				        if(sudoku[i][j]==sudoku[i][j-1] or sudoku[i][j]==sudoku[i][j-2] or sudoku[i][j]==sudoku[i][j-3])
				        {
					        cout<<"*El numero ingresado se encuentra repetido en la misma fila, por favor ingrese otro numero"<<endl<<endl;
					        system("pause");
					        rs=2;
				        }
				    }
				}
			    system("cls");
			}
		    while(rs==2);
		} 
    } cout<<"El sudoku inicial es:"<<endl<<endl;
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
	    {
	    	cout<<sudoku[i][j]<<"  ";
	    }
	    cout<<endl;
	}
	//Este ciclo for se utiliza para evaluar si los numeros aleatoriosson aptos para cada casilla
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
	    {
	        while(sudoku[i][j]==0)
	        {
        	    if(sudoku[i][j]==0)
	    	    {    
	    		    srand(time(0));
                    random = rand()%4+1;
                    if(j==0)
                    {
                    	if(random!=sudoku[i][j+1] && random!=sudoku[i][j+2] && random!=sudoku[i][j+3] && random!=sudoku[i-1][j] && random!=sudoku[i-2][j] && random!=sudoku[i-3][j] && random!=sudoku[i+1][j] &&random!=sudoku[i+2][j] && random!=sudoku[i+3][j])
                    	{
                    	    	sudoku[i][0]=random;
						}
					}
                    if(j==1)
					{
					    if(random!=sudoku[i][j-1]&& random!=sudoku[i][j+1] && random!=sudoku[i][j+2] && random!=sudoku[i-1][j] && random!=sudoku[i-2][j] && random!=sudoku[i-3][j] && random!=sudoku[i+1][j] &&random!=sudoku[i+2][j] && random!=sudoku[i+3][j])
					    {
					        sudoku[i][1]=random;
					    }
					}
					if(j==2)
					{
					    if(random!=sudoku[i][j-1] && random!=sudoku[i][j-2] && random!=sudoku[i][j+1] && random!=sudoku[i-1][j] && random!=sudoku[i-2][j] && random!=sudoku[i-3][j] && random!=sudoku[i+1][j] &&random!=sudoku[i+2][j] && random!=sudoku[i+3][j])
					    {
					        sudoku[i][2]=random;
					    } 	
					}
					if(j==3)
					{
				        if(random!=sudoku[i][j-1] && random!=sudoku[i][j-2] && random!=sudoku[i][j-3] && random!=sudoku[i-1][j] && random!=sudoku[i-2][j] && random!=sudoku[i-3][j] && random!=sudoku[i+1][j] &&random!=sudoku[i+2][j] && random!=sudoku[i+3][j])
				        {
					        sudoku[i][3]=random;
				        }
				    }
			    }
			}
		}
	}
	cout<<endl<<"El sudoku Resuelto es:"<<endl<<endl;
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
	    {
	    	cout<<sudoku[i][j]<<"  ";
	    }
	    cout<<endl;
	}
}
