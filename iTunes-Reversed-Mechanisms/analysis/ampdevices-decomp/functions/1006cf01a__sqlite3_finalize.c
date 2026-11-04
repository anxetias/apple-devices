// name: _sqlite3_finalize
// address: 1006cf01a

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sqlite3_finalize(sqlite3_stmt *pStmt)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf01a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sqlite3_finalize_10082c500)();
  return iVar1;
}

