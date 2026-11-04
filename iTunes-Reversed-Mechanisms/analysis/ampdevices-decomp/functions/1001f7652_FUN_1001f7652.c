// name: FUN_1001f7652
// address: 1001f7652

undefined8 FUN_1001f7652(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_1001f77de();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c8f3b(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    if (*(long *)(param_1 + 0x430) != 0) {
      if (*(long *)(param_1 + 0x438) == 0) {
        iVar2 = FUN_1001f66ce(*(long *)(param_1 + 0x430),0);
      }
      else {
        lVar3 = FUN_1001dfadb(*(long *)(param_1 + 0x438));
        if (lVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006c8dd9(uVar4);
          }
          FUN_1001782e9(0,0);
        }
        iVar2 = FUN_1001f66ce(*(undefined8 *)(param_1 + 0x430),lVar3);
        FUN_1001c64c1(lVar3);
      }
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006c8e4f(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined8 *)(param_1 + 0x430) = 0;
    }
    if (*(long *)(param_1 + 0x428) != 0) {
      iVar2 = FUN_1001f01fc();
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006c8ec5(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined8 *)(param_1 + 0x428) = 0;
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x438));
    FUN_1001c64c1(param_1);
    uVar4 = 0;
  }
  return uVar4;
}

