int main (int argc, char *argv[])
{
	FILE *in, *in2;
	ofstream f1;
	char str[255],a[255];
	int i=0,j=0;
	string s1;
	char *s,*s2;
	
	in = fopen (argv[1],"r");
	in2 = fopen (argv[2],"w");
	
	while(!feof(in))
	{
		s = fgets (str,sizeof(str),in);
		fprintf(in2,s);
	}
	
	fclose(in);
	fclose(in2);
	
	
	in = fopen (argv[1],"r");
	in2 = fopen (argv[2],"r");

	 
	cout<<"LOADING....DONE"<<endl;
	
		thread t1 (foo, in);
		thread t2 (bar, in2);
		t1.join();
		t2.join();
	
	cout<<"SUCCESS!";
	fclose(in);
	fclose(in2);
	
}
