// name: FUN_10017eeee
// address: 10017eeee

undefined1 FUN_10017eeee(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ushort *puVar6;
  uint uVar7;
  
  if (param_1 == (ushort *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100686b36(uVar3);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      param_1 = param_1 + 1;
      uVar4 = 0;
      uVar5 = 0;
      do {
        uVar7 = *(ushort *)((long)param_1 + uVar4) - 0x2f;
        if ((uVar7 < 0x2e) && ((0x200000000801U >> ((ulong)uVar7 & 0x3f) & 1) != 0)) {
          puVar6 = (ushort *)((long)param_1 + uVar4);
LAB_10017ef2d:
          *puVar6 = 0x5f;
          uVar5 = 1;
        }
        else {
          puVar6 = param_1;
          if (*(ushort *)((long)param_1 + uVar4) == 0x2e && uVar4 == 0) goto LAB_10017ef2d;
        }
        uVar4 = uVar4 + 2;
      } while ((uint)uVar1 * 2 != uVar4);
    }
  }
  return uVar5;
}

