#include "./sqlite/sqlite3.h"
#include "createConnection.h"
#include <stdio.h>
#include "postData.h"
#include <string.h>
#include <stdlib.h>

int insertUser(char *name, int *id)
{

    int rc;
    char *err_msg = 0;
    sqlite3_stmt *res;

    char *sql = "INSERT INTO USUARIO(Nombre, ID) VALUES (?, ?);";

    rc = sqlite3_prepare_v2(db, sql, -1, &res, 0);

    if (rc == SQLITE_OK)
    {

        sqlite3_bind_int(res, 2, *id);
        sqlite3_bind_text(res, 1, name, -1, SQLITE_STATIC);
    }
    else
    {
        fprintf(stderr, "Failed to execute statement: %s\n", sqlite3_errmsg(db));
    }

    int step = sqlite3_step(res);
    printf("%i", step);
    sqlite3_finalize(res);

    return step;
}
