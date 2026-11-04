// name: FUN_10050b0cb
// address: 10050b0cb

void FUN_10050b0cb(long param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long *local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  long *local_38;
  
  if (((*(char *)(param_1 + 0x14cda) != '\0') && (*(char *)(param_1 + 0x6abf) != '\0')) &&
     (*(char *)(param_1 + 0x39c) != '\0')) {
    if ((*(char *)(param_1 + 0x14def) != '\x02') || (*(char *)(param_1 + 0x14dfb) == '\0')) {
      uVar5 = FUN_1004e0c3f(param_1,1);
      FUN_1002c0ab5(uVar5,0xc00000,*(undefined8 *)(param_1 + 0x15378));
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x15370);
    local_40 = *(long **)(param_1 + 0x15378);
    uVar4 = FUN_1004e0c3f(param_1,1);
    local_58 = &local_50;
    local_50 = 0;
    lStack_48 = 0;
    local_38 = (long *)FUN_1002c0a63(uVar4,0xc00000);
    uVar3 = FUN_1002c0e84(local_38);
    if (uVar3 != 0) {
      lVar7 = 0;
      do {
        FUN_1002b7e7c(&local_58,*local_38 + lVar7);
        lVar7 = lVar7 + 8;
      } while ((ulong)uVar3 << 3 != lVar7);
    }
    uVar3 = FUN_1002c0e84(local_40);
    if (uVar3 != 0) {
      lVar7 = 0;
      do {
        FUN_1002dbb04(&local_58,*local_40 + lVar7);
        lVar7 = lVar7 + 8;
      } while ((ulong)uVar3 << 3 != lVar7);
    }
    plVar6 = local_58;
    while (plVar6 != &local_50) {
      cVar2 = FUN_1002be216(uVar5,plVar6[4]);
      if (cVar2 == '\0') {
        FUN_1002c0f3a(uVar5,plVar6[4]);
      }
      plVar1 = (long *)plVar6[1];
      plVar8 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar8[2];
          bVar9 = (long *)*plVar6 != plVar8;
          plVar8 = plVar6;
        } while (bVar9);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    FUN_1002c0ca0(local_38,local_40);
    FUN_1002c0bbc(local_38);
    lVar7 = lStack_48;
    FUN_1002a41f4(&local_58,local_50);
    if (lVar7 != 0) {
      uVar5 = FUN_1001c156e();
      FUN_1001c6987(uVar5,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
    }
  }
  return;
}

