void copy(char* s1, char* s2)
{
    for(int i = 0; s1[i] != '\0'; ++i)
        s2[i] = s1[i];
    s2[i] = '\0'; // closes copied string(character chain)
}

void concat(char* s1, char* s2)
{
    int i = 0; // index used on destiny chain
    while(dest[i] != '0') // find the final of destiny chain
        ++i;
    // copy of s1 for the final of s2
    for(int i = 0; s1[i] != '\0'; ++i)
        s2[i] = s1[i];
        ++i;
    s2[i] = '\0'; // closes destiny string(character chain)    
}

int compare(char* s1, char* s2)
{
    for(int i = 0; s1[i] != '\0' && s2[i] != '\0'; ++i)
    {
        // compares character by character
        if(s1[i] < s2[i])
            return -1;
        else if(s1[i] > s2[i])
            return 1;
    }
    // compares if strings haves the same size
    if((s1[i] == '\0') && (s2[i] == '\0'))
        return 0; // same strings
    else if(s1[i] == '\0')
        return -1; // s1 is smaller
    else
        return 1; // s2 is smaller
}

// copy dinamically allocated
char* duplicate(char* s)
{
    int n = strlen(s) + 1;
    char* d = (char *) malloc (n*sizeof(char));
    strcpy (d, s);
    return d;
}

char* combine(char* s1, char* s2)
{
    int n = strlen(s1) + strlen(s2) + 2;
    char* d = (char *) malloc (n*sizeof(char)); // dynamically allocated chain
    strcpy(d, s1);
    strcat(d, "-");
    strcat(d, s2);
    return d;
}