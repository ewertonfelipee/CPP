#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "hacking.h"
#define FILENAME "/var/notes"
#define SIZE 100


//  A function to print the notes for a given uid that match
//  an optional search string;
//  returns 0 at end of file, 1 if there are still more notes.
int print_notes(int fd, int uid, char *search_string)
{
    int note_length;
    char byte = 0, note_buffer[SIZE];

    note_length = find_user_note(fd, uid);
    if(note_length == -1){
        return 0;
    }
    read(fd, note_buffer, note_length); //  Read note data
    note_buffer[note_length] = 0;       //  Terminate the string.

    if(search_note(note_buffer, search_string)){
        printf(note_buffer);
    }
    return 1;
}

// A function to find the next note for a given userID;
// returns -1 if the end of the file is reached;
// otherwise, it returns the length of the found note.
int find_user_note(int fd, int user_uid)
{
    int note_uid = -1;
    unsigned char byte;
    int length;

    while(note_uid != user_uid){
        if(read(fd, &note_uid, 4) != 4) //  Read the uid data.
            return -1;
        if(read(fd, &byte, 1) != 1) // Read the new line separator
            return -1;

        byte = length = 0;
        while(byte != '\n'){
            if(read(fd, &byte, 1) != 1){ // Read a single byte
                return -1;
            }
            length++;
        }
    }
    lseek(fd, length * -1, SEEK_CUR);   //  Rewind file reading by length bytes.
    printf("[DEBUG] found a %d byte note for user id %d\n", length, note_uid);
    return length;
}

// A function to search a note for a given keyword;
// returns 1 if a match is found, 0 if there is no match.
int search_note(char *note, char *keyword){
    int i, keyword_length, match = 0;

    keyword_length = strlen(keyword);
    if(keyword_length == 0){
        return 1;   //  If there is no seach string, always "match".
    }

    for(i = 0; i < strlen(note); i++){ // Iterate over bytes in note.
        if(note[i] == keyword[match]){// If byte matches keyword,
            match++;    //  Get ready to check the next byte;
        }
        else{
            if(note[i] == keyword[0]){  //  if that byte matches first keyword byte,
                match = 1;  // start the match count at 1.
            }
            else{
                match = 0;  //  Otherwise it is zero.
            }
        }
        if(match == keyword_length) //  If there is a full match, return matched.
            return 1;
    }

    return 0;   //  Returned not matched
}

int main(int argc, char **argv)
{
    int userid, printing = 1, fd;
    char search_string[SIZE];

    if(argc > 1){
        strcpy(search_string, argv[1]);
    }
    else
        search_string[0] = 0;

    userid = getuid();
    fd = open(FILENAME, O_RDONLY);
    if(fd == -1){
        fatal("in main() while opening file for reading");
    }

    while(printing){
        printing = print_notes(fd, userid, search_string);
    }
    printf("-------[ end of note data ]-------\n");
    close(fd);
}
