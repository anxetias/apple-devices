// name: ___error
// address: 1006ce9e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * ___error(void)

{
  int *piVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ce9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar1 = (int *)(*(code *)PTR____error_10082cb28)();
  return piVar1;
}

