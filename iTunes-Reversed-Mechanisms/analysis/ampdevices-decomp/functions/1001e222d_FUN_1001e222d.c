// name: FUN_1001e222d
// address: 1001e222d

void FUN_1001e222d(ushort *param_1,short *param_2)

{
  long lVar1;
  ushort uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == (short *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006bbe99(uVar5);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (ushort *)0x0) {
      uVar2 = *param_1;
      uVar4 = (ulong)uVar2;
      uVar6 = 0x10;
      if (0x10 < uVar2) {
        uVar6 = (uint)uVar2;
      }
      if ((uint)uVar2 <= uVar6 - 0x10) {
        return;
      }
      lVar7 = 0;
      lVar8 = 0;
      while( true ) {
        if (param_1[uVar4 + lVar8] == 0x20) {
          return;
        }
        if (param_1[uVar4 + lVar8] == 0x2e) break;
        lVar7 = lVar7 + 2;
        lVar1 = uVar4 + lVar8;
        lVar8 = lVar8 + -1;
        if (lVar1 + -1 <= (long)(ulong)(uVar6 - 0x10)) {
          return;
        }
      }
      if ((int)lVar8 != 0) {
        FUN_1001c631b((long)param_1 + (uVar4 * 2 - lVar7) + 2,param_2 + 1);
      }
      *param_2 = -(short)lVar8;
      return;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006bbe23(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

