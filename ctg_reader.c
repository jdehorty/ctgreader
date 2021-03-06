
#include "version.h"
#include "daydreamer.h"
#include <string.h>
#include <strings.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    // Set unbuffered i/o.
    setbuf(stdout, NULL);
    setbuf(stdin, NULL);

    // Print some identifying information, then do initialization.
    // printf("%s %s, by %s\n", ENGINE_NAME, ENGINE_VERSION, ENGINE_AUTHOR);
    // printf("Compiled %s %s", __DATE__, __TIME__);
// #ifdef COMPILE_COMMAND
    // printf(", using:\n%s", COMPILE_COMMAND);
// #endif
    // printf("\n");

    if (argc != 3) {
        printf("CtgLookup currently takes 2 argument, <ctg book> <fen> \n");
        return -1;
    }
    set_position(&root_data.root_pos, argv[2]);
    init_ctg_book(argv[1]);
    get_ctg_book_move(&root_data.root_pos);
    // get_ctg_book_move(position_t* pos)




    // init_daydreamer();

    // // Read from uci script, if possible.
    // char* script_name = argc > 1 ? argv[1] : "daydreamer.rc";
    // FILE* script;
    // if ((script = fopen(script_name, "r"))) {
    //     printf("Reading input script...\n");
    //     uci_read_stream(script);
    //     fclose(script);
    //     printf("done.\n");
    // }
    //
    // // Main loop input processing.
    // uci_read_stream(stdin);
}
