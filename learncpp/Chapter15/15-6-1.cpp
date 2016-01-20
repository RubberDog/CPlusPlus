// bad example, since ressources won't be cleaned up after an exception

try
{
    OpenFile(strFilename);
    WriteFile(strFilename, strData);
    CloseFile(strFilename);
}
catch (FileException &cException)
{
    cerr << "Failed to write to file: " << cException.what() << endl;
}


// better way to do this, since the file is closed before terminating

try
{
    OpenFile(strFilename);
    WriteFile(strFilename, strData);
    CloseFile(strFilename);
}
catch(FileException &cException)
{
    // Make sure the file is closed
    CloseFile(strFilename);
    // Then write error
    cerr << "Failed to write to file: " << cException.what() << endl;
}
