// name: FUN_10017e1b7
// address: 10017e1b7

undefined1 FUN_10017e1b7(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  if (param_1 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100686292(uVar4);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = (ulong)*param_1;
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      do {
        uVar1 = param_1[uVar5 + 1];
        if ((((uVar1 < 0x20) ||
             (((uVar1 - 0x22 < 0x3b &&
               ((0x400000035002101U >> ((ulong)(uVar1 - 0x22) & 0x3f) & 1) != 0)) || (uVar1 == 0x7c)
              ))) || ((uVar1 == 0xb4 || ((uVar1 & 0xfff8) == 0x2018)))) ||
           (((uVar1 == 0x2e || (uVar1 == 0x20)) && (uVar5 == 0 || uVar3 - 1 == uVar5)))) {
          param_1[uVar5 + 1] = 0x5f;
          uVar6 = 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
    cVar2 = FUN_10017e2aa();
    uVar7 = 1;
    if (cVar2 == '\0') {
      uVar7 = uVar6;
    }
  }
  return uVar7;
}

