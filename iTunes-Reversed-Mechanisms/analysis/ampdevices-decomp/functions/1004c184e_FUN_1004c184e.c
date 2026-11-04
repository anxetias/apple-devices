// name: FUN_1004c184e
// address: 1004c184e

undefined8 FUN_1004c184e(long *param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1[0x9e] != 0) {
    cVar1 = FUN_1004400dc();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x310))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001004c1894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)param_1[0xaa] + 0x68))((long *)param_1[0xaa],param_2 & 1);
      return uVar2;
    }
  }
  return 0;
}

