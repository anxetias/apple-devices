// name: FUN_1001e5474
// address: 1001e5474

undefined1 FUN_1001e5474(long param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006be8a2(uVar2);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = 1;
    if (param_2 != 0) {
      uVar3 = 0;
      do {
        if (0x7f < *(ushort *)(param_1 + uVar3 * 2)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
    }
  }
  return uVar4;
}

