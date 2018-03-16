
#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char **argv)
{
	char carattere_dal_file,
		carattere;
	int molteplicita;
	
	ifstream file ;
	
	file.open( "prova" , ios_base::in|ios_base::binary);
	
	file.get(carattere);
	molteplicita=1;
		
	while ( not file.eof() )
	{	file.get(carattere_dal_file);
		if ( carattere == carattere_dal_file )
			molteplicita++;
		else 
			{ cout << carattere_dal_file << " --- "<< molteplicita << endl;
			  carattere = carattere_dal_file;
			  molteplicita = 1;
			}
	}
	
	file.close();
	
	return 0;
}
