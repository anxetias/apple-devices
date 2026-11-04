// name: _mkdir
// address: 1006ced14

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _mkdir(char *param_1,mode_t param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ced14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__mkdir_10082cf40)();
  return iVar1;
}

