#include <stdio.h>
#include <stdlib.h>

/*
 * Compute an xor-based hash of the data provided on STDIN. The result
 * should be placed in the array of length block_size pointed to by
 * hash_val.
 */
void hash(char *hash_val, long block_size) {
	int y = 0, i = 0;
	while (y < block_size){
	    hash_val[y] = '\0';
	    y++;
	}
	y = 0;
	char input[1024];
	while (scanf("%s", &input) == 1){
	    
	}
	
	while (i < strlen(input)){
		if (y > block_size){
			y = 0;
		}
		hash_val[y] = input[i] ^ hash_val[y];
		i++;
		y++;
	}
}



/* 
 * Print the message "Hashes match" if the two hashes of size 
 * block_size contain the same value. Print "Hash mismatch" otherwise.
 */
void check_hash(const char *hash1, const char *hash2, long block_size) {
	int match = 1, i = 0;
	while (i < block_size){
		if (hash1[i] != hash2[i]){
			match = 0;
		}
		i++;
	}
	if (match == 1){
	    printf("Hashes match");
	}
	else {
	    printf("Hash mismatch");
	}
}
