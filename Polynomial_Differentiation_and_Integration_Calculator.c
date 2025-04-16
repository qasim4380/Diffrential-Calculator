#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int cal;
	
	printf("Press 1 for Diffrenciation\nPress 2 for Integration: ");
	scanf("%d",&cal);
	
	if(cal==1)
	{
		
	int v,t,i,j,vd,tt;
	float derv=0,dervi,lderv,ddervi,wdervi,dervid,derivative=0,tdervi,td,tderv,d,c,cd,dd,cx,ct,x,y,sum=0,sum1=0;
	
	printf("Enter the number of values of polynomial: ");
	scanf("%d",&v);
	
	printf("Enter the value of x: ");
	scanf("%f",&x);
	

	for(i=1;i<=v;i++)
	{
		
		printf("Enter the type of value %d\nPress 1 for simple value\nPress 2 when there is a degree on the whole value\nPress 3 when there is log funtion in value\nPress 4 when there is exponential funtion in value\nPress 5 when there is trigonometric funtion in value: ",i);
	    scanf("%d",&t);
	    
	    printf("\n\n");

	    if(t==1)
	    {
	    	printf("Enter the degree of value %d: ",i);
	        scanf("%f",&d);
	        
	        printf("Enter the constant of value %d: ",i);
	        scanf("%f",&c);
	        
	        printf("%.2fx^%.2f\n",c,d);
	        
	        dervi=d*c*pow(x,d-1); 
	        printf("%.2f\n",dervi);
	        
	        derv=derv+dervi;
	        
	    }

		else if (t==2)
		{
			
			printf("Enter the degree of value %d: ",i);
	        scanf("%f",&d);
	        
	        printf("Enter the constant of value %d: ",i);
	        scanf("%f",&c);
	        
	        printf("Enter the values in this: ");
	        scanf("%d",&vd);
	        
	        for(j=0;j<vd;j++)
	        {
	        	printf("Enter the degree of value %d: ",j+1);
	            scanf("%f",&dd);
	            fflush(stdin);
	            printf("Enter the constant of value %d: ",j+1);
	            scanf("%f",&cd);
	            fflush(stdin);
	            printf("%fx^%f\n",cd,dd);
	            
	            y=x;
	            sum1=sum1+cd*pow(y,dd);
				dervid=dd*cd*pow(y,dd-1);
				sum=sum+dervid;
			}
			
			dervi=d*c*pow(sum1,d-1);
			wdervi=dervi*sum;
			printf("%.2f\n",wdervi);
			
			derv=derv+wdervi;
			
		}


		else if(t==3)
		{
			
			float ldervi;
			int tl,ve,m;
			
			printf("Press 1 for single value\nPress 2 for more than one power value : ");
			scanf("%d",&tl);
			if(tl==1){
				
			printf("Enter the degree of value %d: ",i);
	        scanf("%f",&d);
	        
	        printf("Enter the constant of value %d: ",i);
	        scanf("%f",&c);
	        
	        printf("ln %f(x)^%f\n",c,d);
	        
	        ddervi=(d*c*pow(x,d-1));
	        dervi=c*pow(x,d);
	        ldervi=1/dervi;
	        lderv=ldervi*ddervi;
	        printf("%.2f\n",lderv);
			}
			else if(tl==2){
				
	        printf("Enter the constant of value %d: ",i);
	        scanf("%f",&c);
	        
	        printf("Enter the values in the power of value: ");
	        scanf("%d",&ve);
	        
	        for(m=0;m<ve;m++)
	        {
	        	printf("Enter the degree of value %d: ",m+1);
	            scanf("%f",&dd);
	            fflush(stdin);
	            printf("Enter the constant of value %d: ",m+1);
	            scanf("%f",&cd);
	            fflush(stdin);
	            printf("%fx^%f\n",cd,dd);
	            
	            y=x;
	            sum1=sum1+cd*pow(y,dd);
				dervid=dd*cd*pow(y,dd-1);
				sum=sum+dervid;
			}
			
			dervi=sum/sum1;
			lderv=dervi;
			printf("%.2f\n",lderv);
			}
	        
	        derv=derv+lderv;
	        
		}
		
		
		else if(t==4)
		{
			
			float e=2.718;
			int te,vl,k;
			
			printf("Press 1 for single power value\nPress 2 for more than one power value\nPress 3 for ln : ");
			scanf("%d",&te);
			if(te==1){
				printf("Enter the constant in degree of value %d: ",i);
	        scanf("%f",&cx);
	        
	        printf("Enter the constant of value %d: ",i);
	        scanf("%f",&c);
	        
	        printf("%f(e)^%fx\n",c,cx);
	        
	        wdervi=cx*c*pow(e,cx*x);
	        printf("%.2f\n", wdervi);
			}
			else if(te==2){
	        
	        printf("Enter the constant of value %d: ",i);
	        scanf("%f",&c);
	        
	        printf("Enter the values in the power of value: ");
	        scanf("%d",&vl);
	        
	        for(k=0;k<vl;k++)
	        {
	        	printf("Enter the degree of value %d: ",k+1);
	            scanf("%f",&dd);
	            fflush(stdin);
	            printf("Enter the constant of value %d: ",k+1);
	            scanf("%f",&cd);
	            fflush(stdin);
	            printf("%fx^%f\n",cd,dd);
	            
	            y=x;
	            sum1=sum1+cd*pow(y,dd);
				dervid=dd*cd*pow(y,dd-1);
				sum=sum+dervid;
			}
			
			dervi=c*pow(e,sum1);
			wdervi=dervi*sum;
			printf("%.2f\n",wdervi);
			}
			else if(te==3)
			{
				printf("Enter power of e: ",cx);
				scanf("%.2f",&cx);
				
				printf("Enter the constant of value %d: ",i);
	        scanf("%f",&c);
	        dervi=c;
				wdervi=dervi;
			}
	        derv=derv+wdervi;
	        
		}
		
		
		else if(t==5)
		{
		
			printf("Enter the trignometric identity for value %d\nPress 1 for sin\nPress 2 for cos\nPress 3 for tan\nPress 4 for cosec\nPress 5 for sec\nPress 6 for cot : ",i);
		    scanf("%d",&tt);
		    
	        printf("Enter the constant of trignometric value : ");
		    scanf("%f",&c);
		    
		    printf("Enter the degree for the trigonemetric angle: ");
		    scanf("%f",&d);
		    
		    printf("Enter the constant for the trigonemetric angle: ");
		    scanf("%f",&ct);
		    
		    if(tt==1)
			{
		
		    	printf("%.2fsin%f(x)^%.2f\n",c,ct,d);
		    	dervi=ct*pow(x,d);
		    	tdervi=d*ct*pow(x,d-1);
		    	td=cos(dervi);
		    	tderv=c*tdervi*td;
		    	printf("%.2f\n", tderv);
		    	
		    	derv=derv+tderv;
		    	
			}
			
			else if(tt==2)
			{
				
				printf("%.2fcos%d(x)^%.2f\n",c,ct,d);
				
		    	dervi=ct*pow(x,d);
		    	tdervi=d*ct*pow(x,d-1);
		    	td=(sin(dervi))*(-1);
		    	tderv=c*tdervi*td;
		    	printf("%.2f\n", tderv);
		    	
		    	derv=derv+tderv;
		    	
			}
			
			else if(tt==3)
			{
				
				printf("%.2ftan%d(x)^%.2f\n",c,ct,d);
				
		    	dervi=ct*pow(x,d);
		    	tdervi=d*ct*pow(x,d-1);
		    	td=1/pow(cos(dervi),2);
		    	tderv=c*tdervi*td;
		    	printf("%.2f\n", tderv);
		    	
		    	derv=derv+tderv;
		    	
			}
			
			else if(tt==4)
			{
				
				printf("%.2fcosec%d(x)^%.2f\n",c,ct,d);
				
		    	dervi=ct*pow(x,d);
		    	tdervi=d*ct*pow(x,d-1);
		    	td=1/sin(dervi)*(-1);
		    	tderv=c*tdervi*td*1/(tan(dervi));
		    	printf("%.2f\n", tderv);
		    	
		    	derv=derv+tderv;
		    	
			}
			else if(tt==5)
			{
				
				printf("%.2fsec%d(x)^%.2f\n",c,ct,d);
				
		    	dervi=ct*pow(x,d);
		 
		    	tdervi=d*ct*pow(x,d-1);
		    	td= tan(dervi)*1/cos(dervi);
		    	tderv=c*tdervi*td;
		    	printf("%.2f\n", tderv);
		    	
		    	derv=derv+tderv;
		    	
			}
			else if(tt==6)
			{
				
				printf("%.2fcot%d(x)^%.2f\n",c,ct,d);
				
		    	dervi=ct*pow(x,d);
		    	tdervi=d*ct*pow(x,d-1);
		    	td=1/pow(sin(dervi),2);
		    	tderv=c*tdervi*(-1)*td;
		    	printf("%.2f\n", tderv);
		    	
		    	derv=derv+tderv;
		    	
			}
		
		}
		    
		}
		printf("\n\n");

		derivative=derivative+derv;
		
        printf("The derivative is %.2f", derivative);
        
        return 0;
        
  }
  
  else if(cal==2)
  {
  	
  	int i,n;
	float co=0,po=0;

	printf("Enter Number of terms: "); 
	scanf("%d",&n);
	float coeff[n],power[n];
	
	printf("\n\n");
	
	for(i=0;i<n;i++){
		printf("Enter coefficient for term No.%d: ",i+1);
		scanf("%f",&coeff[i]);
		printf("Enter power for term No.%d: ",i+1);
		scanf("%f",&power[i]);
		
	}
	printf("\n\n");	
	printf("Your equation; ");
	for(i=0;i<n;i++){
		co=coeff[i];
		po=power[i];
	
		if(co<0)
		{
			printf("%.1f(x)^(%.1f) ",co,po);
		}
		else
		{
			
			if(i!=0)
			{
				printf(" + ");
			}
			
			printf(" %.1f(x)^(%.1f) ",co,po);
		}
		
	}
		
	printf("\n\n");	
	printf("Integrated equation; ");
	for(i=0;i<n;i++){
		co=coeff[i];
		po=power[i];
		
		po=po+1;
		co=co/po;
		
		if(co<0)
		{
			printf("%.1f(x)^(%.1f) ",co,po);
		}
		else
		{
			
			if(i!=0)
			{
				printf(" + ");
			}
			
			printf(" %.1f(x)^(%.1f) ",co,po);
			
		}
		
	}
	printf("+  c");
	
	printf("\n\n");

    return 0;
    
    
  }  
  
  
}
	
	



        

