// name: FUN_1002adb1d
// address: 1002adb1d

void FUN_1002adb1d(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 local_28;
  
  if (param_1 != 0) {
    local_28 = param_3;
    auVar5 = FUN_1002b798e(param_1,&local_28);
    plVar2 = auVar5._0_8_;
    if (plVar2 != auVar5._8_8_ && plVar2 != (long *)(param_1 + 8)) {
      do {
        if (plVar2[5] == param_2) {
          FUN_10020e52a(param_1,plVar2);
          operator_delete(plVar2);
          return;
        }
        plVar1 = (long *)plVar2[1];
        plVar3 = plVar2;
        if ((long *)plVar2[1] == (long *)0x0) {
          do {
            plVar2 = (long *)plVar3[2];
            bVar4 = (long *)*plVar2 != plVar3;
            plVar3 = plVar2;
          } while (bVar4);
        }
        else {
          do {
            plVar2 = plVar1;
            plVar1 = (long *)*plVar2;
          } while ((long *)*plVar2 != (long *)0x0);
        }
      } while (plVar2 != auVar5._8_8_);
    }
  }
  return;
}

