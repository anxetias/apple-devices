// name: FUN_10009a8d0
// address: 10009a8d0

undefined8 FUN_10009a8d0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_2 + 4) == 0xf0e3c17;
  switch(bVar2) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0001000b0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_10009a90c::caseD_0 +
              (int)(&switchD_10009a90c::switchdataD_1006f0c30)
                   [(int)((uint)(**(char **)(param_2 + 8) == '\0') +
                         (uint)!bVar2 * 0x21c03b1f + -0x21c03b1d)]))();
    return uVar1;
  case true:
    return 0xffff5bde;
  }
}

