// file handling -writing to afile
#include <stdio.h>
int main()
{

    FILE *filePointer;                // declare a file pointer
    char filename[100] = "filla.txt"; // name of the file
    char text[200];                   // text to write in the file
    // open the file in the write mode("w")
    filePointer = fopen(filename, "w");
    // check if file opened successfully
    if (filePointer == NULL)
    {
        printf("error:unable  to open this file");
        return 1;
    }
    // ask user for input text
    printf("enter the text to write in the file:\n");
    fgets(text, sizeof(text), stdin);
    // write to file
    fprintf(filePointer, "%s", text); // close the file(this saves the data)
    fclose(filePointer);
    printf("File %s written and saved successfully.\n", filename);
    return 0;
}
