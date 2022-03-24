#include "./sqlite/sqlite3.h"

#ifndef createConnection
#define createConnection

extern sqlite3 *db;

int startConn();

#endif