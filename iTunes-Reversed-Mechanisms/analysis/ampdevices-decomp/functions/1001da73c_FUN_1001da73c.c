// name: FUN_1001da73c
// address: 1001da73c

void FUN_1001da73c(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar6 = *(long *)(*(long *)(lVar1 + 0x48) + 0x10);
    if (lVar6 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b7631(uVar3);
      }
      FUN_1001782e9(0,0);
      lVar6 = *(long *)(*(long *)(lVar1 + 0x48) + 0x10);
    }
    lVar4 = _CFRunLoopGetCurrent();
    if (lVar6 != lVar4) {
      FUN_1001e9de0(lVar1);
    }
    FUN_100172cc1(*(undefined8 *)(lVar1 + 0x1d8));
    while (lVar5 = FUN_1001ead5c(lVar1 + 0x70), lVar5 != 0) {
      FUN_1001dca35(lVar1,lVar5,0xffffffd9);
    }
    lVar5 = FUN_1001eada7(lVar1 + 0x58);
    while (lVar5 != 0) {
      FUN_1001eac02(lVar5,lVar1 + 0x70);
      FUN_1001dca35(lVar1,lVar5,0xffffffd9);
      lVar5 = FUN_1001eada7(lVar1 + 0x58);
    }
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x479) = 0;
    *(undefined4 *)(param_1 + 0x480) = 0xffffffce;
    FUN_1001ed939(*(undefined8 *)(lVar1 + 0x48),0);
    if (lVar6 != lVar4) {
      FUN_1001e9eb9(lVar1);
    }
  }
  return;
}

