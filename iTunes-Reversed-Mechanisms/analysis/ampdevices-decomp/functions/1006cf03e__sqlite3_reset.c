// name: _sqlite3_reset
// address: 1006cf03e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sqlite3_reset(sqlite3_stmt *pStmt)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf03e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sqlite3_reset_10082c530)();
  return iVar1;
}

