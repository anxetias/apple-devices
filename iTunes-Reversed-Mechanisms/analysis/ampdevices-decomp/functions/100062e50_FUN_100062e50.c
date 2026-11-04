// name: FUN_100062e50
// address: 100062e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100062e50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  switch(*(int *)(param_1 + 0x48) == 0xf0e3c1a) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00010007f0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_100062eb6::caseD_0 + _UNK_1006e672c))();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x000100064ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)DAT_1006e686c + 0x100064a79))
              (param_1,param_2,(code *)((long)DAT_1006e686c + 0x100064a79),0x9e753065,param_5,
               &LAB_100064ceb);
    return;
  }
}

