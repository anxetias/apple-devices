// name: FUN_10018a652
// address: 10018a652

void FUN_10018a652(short *param_1,uint param_2,long *param_3,uint *param_4)

{
  char cVar1;
  undefined8 uVar2;
  short *psVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 == (short *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068ff29(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 != (long *)0x0) {
      *param_3 = (long)param_1;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = param_2;
    }
    if (param_2 != 0) {
      lVar4 = (ulong)param_2 * -2;
      uVar5 = 0;
      psVar3 = param_1;
      do {
        if (*psVar3 == 0x2f) {
          FUN_10018bb0c(param_1,psVar3,param_1 + param_2);
          if (param_4 != (uint *)0x0) {
            *param_4 = uVar5;
          }
          if (param_3 == (long *)0x0) {
            return;
          }
          *param_3 = (long)param_1 - lVar4;
          return;
        }
        psVar3 = psVar3 + 1;
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0);
    }
  }
  return;
}

