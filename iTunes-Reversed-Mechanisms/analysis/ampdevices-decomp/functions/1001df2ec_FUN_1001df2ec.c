// name: FUN_1001df2ec
// address: 1001df2ec

void FUN_1001df2ec(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ushort uVar7;
  
  if (param_1 == (ushort *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006b9dcf(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = FUN_1001e7a3d();
    uVar4 = FUN_1001e7ae5();
    uVar1 = *param_1;
    if ((ulong)uVar1 != 0) {
      uVar6 = 0;
      do {
        uVar7 = uVar3;
        if ((param_1[uVar6 + 1] == 0x2e) || (uVar7 = uVar4, param_1[uVar6 + 1] == 0x2c)) {
          param_1[uVar6 + 1] = uVar7;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  return;
}

