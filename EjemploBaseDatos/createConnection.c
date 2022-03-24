#include "./sqlite/sqlite3.h"
#include "createConnection.h"
#include "getData.h"
#include "postData.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

sqlite3 *db;

int startConn()
{
    int rc = sqlite3_open("./base.db", &db);

    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "Cannot open database: %s\n",
                sqlite3_errmsg(db));
        sqlite3_close(db);

        return 0;
    }

    return 1;
}

int main(void)
{
    int conn = startConn();

    if (conn == 1)
    {

        char id = '1';

        printf("Nombre del usuario con id 1: %s\n", getName(&id));

        char *name = "JONLE";
        int id1 = 5;

        insertUser(name, &id1);
    }

    return 0;
}