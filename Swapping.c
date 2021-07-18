// swapping 2 numbers use of 3rd varable.
// swapping 2 numbers with out useing 2rd varable.
main()
{
	int n1,n2,temp; //noneed to use temp for swapping if we use operaters.
	printf("Enter the value n1",n1);
	scanf("%d",&n1);
	printf("Enter the value n2",n2);
	scanf("%d",&n2);
	//temp=n1;   
	  //n1=n1+n2;
	       //n1=n1*n2;
	             n1=n1^n2;
	//n1=n2;  
	  //n2=n1-n2;
	       //n2=n1/n2;
	             n2=n1^n2;
	//n2=temp;
	   //n1=n1-n2;
	      //n1=n1/n2;
	            n1=n1^n2;
	printf("After swapping n1 and n2= %d, %d ",n1,n2);
}
