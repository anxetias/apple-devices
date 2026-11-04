// name: FUN_10052b01a
// address: 10052b01a

void FUN_10052b01a(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0x20))();
  plVar1 = param_1 + 1;
  uVar2 = FUN_10015a861(plVar1);
  if (uVar2 != 0) {
    uVar4 = 1;
    do {
      plVar3 = (long *)FUN_10015b12c(plVar1,uVar4);
      if (plVar3 != (long *)0x0) {
        if ((*(char *)((long)param_1 + 0x84) == '\x01') && (*plVar3 != 0)) {
          FUN_10052b0a8(*plVar3 + 8);
        }
        *plVar3 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= uVar2);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  FUN_10015a7f4(plVar1);
  return;
}

