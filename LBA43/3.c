/*
    3. Write a recursive program which accept string from user and count number
    of small characters.

    Input : HElloWOrlD
    Output : 5

*/

int Small(char *str)
{
    static int iCount = 0; 

    if (*str == '\0') 
    {
        return iCount; 
    }

    if (*str >= 'a' && *str <= 'z') 
    {
        iCount++; 
    }

    return Small(str + 1); 
}