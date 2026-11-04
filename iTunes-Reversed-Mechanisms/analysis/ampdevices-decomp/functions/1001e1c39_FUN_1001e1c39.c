// name: FUN_1001e1c39
// address: 1001e1c39

void FUN_1001e1c39(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bbae7(uVar4);
    }
  }
  else {
    if (param_2 != (ushort *)0x0) {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      if (uVar1 < 0x100) {
        *param_2 = uVar1;
        if (uVar1 == 0) {
          return;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006bb9fb(uVar4);
        }
        FUN_1001782e9(0,0);
        *param_2 = 0xff;
        uVar3 = 0xff;
      }
      uVar3 = uVar3 + 1;
      lVar5 = 2;
      do {
        *(undefined2 *)((long)param_2 + lVar5) = *(undefined2 *)((long)param_1 + lVar5);
        uVar3 = uVar3 - 1;
        lVar5 = lVar5 + 2;
      } while (1 < uVar3);
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bba71(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

