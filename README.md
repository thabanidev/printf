# printf
 Implementing the printf function using C

## Description
This project is about creating a printf function, which is a function that prints a string of characters with special format. The function is called with a string of characters and a list of arguments. The string of characters is the format string, which contains two types of objects: ordinary characters, which are simply copied to the output stream, and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier. In between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier.