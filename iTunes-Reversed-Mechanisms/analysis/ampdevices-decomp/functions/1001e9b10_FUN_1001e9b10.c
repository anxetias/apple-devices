// name: FUN_1001e9b10
// address: 1001e9b10

undefined4 FUN_1001e9b10(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63636d70)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c1fed(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    uVar1 = param_1[2];
    if ((uVar1 & 1) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006c1f77(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    uVar5 = 0;
    LOCK();
    uVar3 = param_1[2];
    bVar6 = uVar1 == uVar3;
    if (bVar6) {
      param_1[2] = 0;
      uVar3 = uVar1;
    }
    UNLOCK();
    if (!bVar6) {
      uVar5 = 0;
      do {
        LOCK();
        uVar1 = param_1[2];
        bVar6 = uVar3 == uVar1;
        if (bVar6) {
          param_1[2] = 0;
          uVar1 = uVar3;
        }
        uVar3 = uVar1;
        UNLOCK();
      } while (!bVar6);
    }
  }
  return uVar5;
}

