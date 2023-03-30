trncat - concatenate two strings
 * using at most n bytes from src
  * @dest: input value
   * @src: input value
    * @n: input value
     *
      * Return: dest
       */
       char *_strncat(char *dest, char *src, int n)
{
		int i;
			int j;

				i = 0;
					while (dest[i] != '\0')
							{
										i++;
											}
						j = 0;
							while (j < n && src[j] != '\0')
									{
											dest[i] = src[j];
												i++;
													j++;
														}
								dest[i] = '\0';
									return (dest);
}
include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * _strncat - Concatenates two strings using at most                                                                                 
 *            an inputted number of bytes from src.                                                                                  
 * @dest: The string to be appended upon.                                                                                            
 * @src: The string to be appended to dest.                                                                                          
 * @n: The number of bytes from src to be appended to dest.                                                                          
 *                                                                                                                                   
 * Return: A pointer to the resulting string dest.                                                                                   
 */                                                                                                                                  
char *_strncat(char *dest, char *src, int n)                                                                                         
{                                                                                                                                    
        int index = 0, dest_len = 0;                                                                                                 
                                                                                                                                     
        while (dest[index++])                                                                                                        
                dest_len++;                                                                                                          
                                                                                                                                     
        for (index = 0; src[index] && index < n; index++)                                                                            
                dest[dest_len++] = src[index];                                                                                       
                                                                                                                                     
        return (dest);                                                                                                               
}
