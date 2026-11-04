// name: FUN_1001e4201
// address: 1001e4201

int FUN_1001e4201(long param_1,int param_2,long param_3,int param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd775(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd7fd(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  cVar3 = FUN_1001e40ed(param_1,param_2,param_5);
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd885(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  cVar3 = FUN_1001e40ed(param_3,param_4,param_5);
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd8fb(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  bVar9 = param_2 != 0;
  bVar10 = param_4 != 0;
  if (bVar9 && bVar10) {
    lVar8 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + lVar8 * 2);
      uVar7 = (uint)uVar1;
      uVar2 = *(ushort *)(param_3 + lVar8 * 2);
      uVar6 = (uint)uVar2;
      if ((param_5 & 1) != 0) {
        uVar7 = uVar1 - 0x20;
        if (0x19 < (ushort)(uVar1 - 0x61)) {
          uVar7 = (uint)uVar1;
        }
        uVar6 = uVar2 - 0x20;
        if (0x19 < (ushort)(uVar2 - 0x61)) {
          uVar6 = (uint)uVar2;
        }
      }
      if ((int)uVar6 < (int)uVar7) {
        return 1;
      }
      if ((int)uVar7 < (int)uVar6) {
        return -1;
      }
      iVar4 = (int)lVar8;
      bVar10 = param_4 + -1 != iVar4;
      bVar9 = param_2 + -1 != iVar4;
    } while ((bVar9) && (lVar8 = lVar8 + 1, param_4 + -1 != iVar4));
  }
  iVar4 = 1;
  if (!bVar9) {
    iVar4 = -(uint)bVar10;
  }
  return iVar4;
}

