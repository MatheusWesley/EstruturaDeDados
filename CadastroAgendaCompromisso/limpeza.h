void limp(){

	#ifdef linux || LINUX || Linux || UNIX
    //código especifico para linux
    //system ("clear");//poderia ser este mas escolhi este outro pois é mais a cara do C
    printf("\e[H\e[2J");
    printf("\nPoder do Linux\n\n");
    #elif defined WIN32 || Win32 || win32
    //código específico para windows
    system ("cls");
    printf("\ne' Windows hahahahaha\n\n");
    #else
    printf("\e[H\e[2J");
    printf("\nEste sistema nem sei quem é\n\n");
    #endif
}