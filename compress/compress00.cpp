
#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char **argv)
{
	char carattere_dal_file;
	ifstream file ;
	
	file.open( "prova" , ios_base::in|ios_base::binary);
	
	file.get(carattere_dal_file);
	while ( ! file.eof() )
	{	cout << carattere_dal_file << endl;
		file.get(carattere_dal_file);
	}
	
	file.close();
	
	return 0;
}
