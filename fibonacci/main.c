#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if(n<2)
		return n;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    char buffer;
    FILE* archivo=fopen("C:\\Users\\Traian\\Desktop\\dato.txt","r");
    fscanf(archivo,"%c", &buffer);
    fclose(archivo);

    int n=(buffer-'0');

    int res=fibonacci(n);

    archivo=fopen("C:\\Users\\Traian\\Desktop\\dato.txt","w");
    fprintf(archivo,"%d",res);
    fclose(archivo);

    return 0;
}
