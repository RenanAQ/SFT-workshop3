/* * Find the position of a string in an array of strings. 
* @param str - the string to find * @param list - the list of strings to search 
* @param nstrings - the number of strings in the list 
* @returns the position of the string in the list or -1 if not found */
int findString(const char str[], const char list[][MAX_STRING_LEN + 1], const int nstrings); 
/*
Test1:
input: main, {this is a main function}, 5
output: 3

Test2:
input: ma!n, {this is a main function ma!n}, 6
output: 6

Test3:
input: main, {this is a main function main}, 6
output: 3

Test4:
input: main, {this is a Main function}, 6
output: 3 (not case sensitive)

Test5: empty str and empty list

Test6: test the limit of the MAX_STRING_LEN

Test7: make nstrings < list.length


Test8: negative nstrings

*/
/*========================================================*/
/* * Initialize all members of an array to a single value. 
* @param ar - the array to initialize 
* @param value - the value to set all array members to
* @param size - the size of the array */ 
void init(int ar[], const int value, const int size); 
/*
Test1:
input: {7,8,1,0,-1,3}, 4, 6
output: 4,4,4,4,4,4

Test2:
input: {7,8,1,0,-1,3}, 4, -2
output: garbage array or the same initial array

Test3:
input: {7,8,1,0,-1,3}, -4, 2
output: -4,-4,1,0,-1,3
*/



/*========================================================*/
/* 
* Add an item to the shopping cart. 
* @param cart - the cart to add to
* @param item - the item to add 
* @returns zero on success or non-zero if an error occurs */
int add2Cart(struct Cart* cart, const int item); 
/*
Test1:
input: {apple, banana, orange}, 128 (# for eggs)
output: 0

Test2:
input: {apple, banana, orange}, 521 (# for apple)
output: 0

Test3:
input: {apple, banana, orange}, 999 (# not exist)
output: -1

Test4:
input: {apple, banana, orange}, -1 (# for eggs)
output: -1

Test5:
input: {}, 4011 (# for banana)
output: 0

*/

/*========================================================*/
/* * Clear input buffer until next newline character. */
/*
explanation:
scanf("%c", &c) => xyz [enter] //it will only read the letter x. YZ will keep in the buffer
*/
void clear();
/*
Test1:

*/
// #include <stdio.h>
// int main()
// {
//     char c;
//     char *cptr = &c;
//     printf("input: ");
//     scanf("%c", &c);
//     printf("inputted: %c\n", c);
//     for(int i=0; i < 10; i++)
//     {
//         printf("%c", cptr[i]);
//     }
//     printf("\n");
// }

//teeeeeeeeeeeeeeeeeeeeeeeeeeeeeea