//TODO figure out headers


int main()
{
	int i, family;
	
	for(i = 0, i < 5; i++)
	{
		family = fork();
		if(family == 0)
		{
			settickets(i * 10);//probably wrong function
		}
	}
	//what to assert? i.e. what to test for?
	//looking at this tommorrow when the actual program's written
	return 0;
}
