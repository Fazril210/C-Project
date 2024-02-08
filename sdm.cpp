#include "admin.h"
#include "load.h"

int main(int argc, char *argv[])
{
    start_load();
    Admin_admin();
    end_load();
    return 0;
}