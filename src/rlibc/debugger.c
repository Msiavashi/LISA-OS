
//prints the data of the mips assemly
void print_data(struct data *head)
{
	if ( head->string == NULL )
		printf("data is : %d\n", head->word);
	else
		printf("label is : %s\n", head->label);
	printf("dataType is : %s\n", head->type);
}

//print the executing line
void print_line(struct text *head)
{
	printf("executing line : %s\n", head->line);
}

//loads the debugger
void debugger(void)
{
	if ( debug_flag == 1 )
	{
		print_data(data_head);
		print_line(text_head);
		printf("press any key to continue ... ");
		getch();
	}
}

