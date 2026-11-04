// name: _sqlite3_prepare_v2
// address: 1006cf038

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sqlite3_prepare_v2(sqlite3 *db,char *zSql,int nByte,sqlite3_stmt **ppStmt,char **pzTail)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sqlite3_prepare_v2_10082c528)();
  return iVar1;
}

