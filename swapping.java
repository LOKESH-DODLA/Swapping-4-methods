public class swapping
{
	public static void main(String[]args)
	{
		int n1,n2;//,temp;
		n1=Integer.valueOf(args[0]).intValue();
		n2=Integer.valueOf(args[1]).intValue();
		//t=Integer.valueOf(args[3]).intValue();
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
		System.out.println("after swapping n1 = "+n1);
		System.out.println("after swapping n2 = "+n2);
	}
}	