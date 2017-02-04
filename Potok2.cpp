void foo (FILE *in)
{
	ofstream f1;
	
	char a[255], str[255];
	int i=0,j=0;
	char *s;
	string s1,stroka="";
	while(!feof(in))
	{
		s = fgets (str,sizeof(str),in);
		j++;
		itoa(j,a,10);
		s1=a;
		s1=s1+".txt";
		i=0;
		for (i=0; str[i]!=NULL; i++)
		{
			stroka+=str[i];
		}
		
		cout<<"POTOK1"<<endl;
		f1.open(s1, ios_base::out);
		f1<<"Исходная строка: "<<str<<"\n";
		f1<<"Количество возможных перестановок: "<<itoa(fact(stroka.length()), str, 10)<<"\n\nВыполнил поток #1\n"<<"\nВозможные перестановки: \n\n";
		f1.close();
		
   		sort(stroka.begin(), stroka.end());
    	P(0, stroka, stroka.length(), s1);
		
		
		
		stroka="";
		
		
	}
}
