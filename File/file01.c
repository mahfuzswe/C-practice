#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test_file.text","a+");

    int i;
    for(i = 65; i < 90; i++){
        fputc(i, fp);
    }

    char arr[100] = "Hi, I am going well!";
    fputs(arr, fp);

    fprintf(fp, "My id is: %d\n", 100);


    int c;
    c = fgetc(fp);
    printf("The char is: %c\n",c);

    char buff[100];
    fscanf(fp, "%s", buff);
    printf("The data in buffer is: %s\n",buff);

    fgets(buff, 500, fp);
    printf("The data in buffer is: %s\n",buff);

    fgets(buff, 500, fp);
    printf("The data in buffer is: %s\n",buff);

    fclose(fp);
    return 0;
}
