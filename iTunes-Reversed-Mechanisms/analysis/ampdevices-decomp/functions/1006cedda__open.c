// name: _open
// address: 1006cedda

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cedda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__open_10082cf78)();
  return iVar1;
}

