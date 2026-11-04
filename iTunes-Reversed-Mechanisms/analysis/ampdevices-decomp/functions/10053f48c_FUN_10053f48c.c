// name: FUN_10053f48c
// address: 10053f48c

void FUN_10053f48c(long *param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5)

{
  if (((char)param_1[0xa7] == '\0') && (param_3 != 0 || param_4 != 0)) {
    (**(code **)(*param_1 + 0x170))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010053f4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,param_3,param_4,param_5,param_2);
  return;
}

