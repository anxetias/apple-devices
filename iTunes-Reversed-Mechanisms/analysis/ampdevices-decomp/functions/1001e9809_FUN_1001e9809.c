// name: FUN_1001e9809
// address: 1001e9809

int FUN_1001e9809(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63636d70)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006c1e8b(uVar5);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    uVar3 = param_1[2];
    if ((uVar3 & 1) != 0 && (*(byte *)(param_1 + 1) & 1) == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006c1da9(uVar5);
      }
      FUN_1001782e9(0,0);
    }
    uVar7 = (uVar3 & 2) >> 1;
    bVar6 = (byte)uVar7;
    LOCK();
    uVar2 = param_1[2];
    bVar8 = uVar3 == uVar2;
    if (bVar8) {
      param_1[2] = uVar3 | 1;
      uVar2 = uVar3;
    }
    UNLOCK();
    while (!bVar8) {
      bVar6 = (byte)uVar7 | (byte)((uVar2 & 2) >> 1);
      uVar7 = (uint)bVar6;
      LOCK();
      uVar3 = param_1[2];
      bVar8 = uVar2 == uVar3;
      if (bVar8) {
        param_1[2] = uVar2 | 1;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
    }
    iVar4 = 0;
    if (((bVar6 != 0) && (iVar4 = FUN_1001b16d1(param_1[3]), iVar4 != -0x80)) && (iVar4 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006c1e1f(iVar4,uVar5);
      }
    }
  }
  return iVar4;
}

