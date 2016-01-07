int FindFirstChar(const char* strString, char chChar)
{
    // Step through each character in strString
    for(int nIndex = 0; nIndex < strlen(strString); nIndex++)
        // If the character matches chChar, return its index
        if(strString[nIndex] == chChar)
            return nIndex;

    // If no match was found, return -1
    return -1;
}
