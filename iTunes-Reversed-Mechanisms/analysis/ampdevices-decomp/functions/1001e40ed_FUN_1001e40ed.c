// name: FUN_1001e40ed
// address: 1001e40ed

undefined1 FUN_1001e40ed(ushort *param_1,int param_2,ulong param_3)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_3 & 4) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_1 == (ushort *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006bd6fc(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    uVar4 = FUN_1001e39bb(*param_1);
    if ((uVar4 & 0x3e) != 0) {
      return 0;
    }
    if (DAT_1008a2770 != -1) {
      FUN_1006bc86f();
    }
    while (param_2 != 0) {
      uVar1 = *param_1;
      if (0x7a < (ulong)uVar1) {
        return 0;
      }
      if ((&DAT_1008a2780)[uVar1] == '\0') {
        return 0;
      }
      param_1 = param_1 + 1;
      bVar6 = (param_3 & 0x10) == 0;
      bVar5 = (ushort)(uVar1 - 0x3a) < 0xfff6;
      param_2 = param_2 - (uint)(bVar5 || bVar6);
      if (!bVar5 && !bVar6) {
        return 0;
      }
    }
  }
  return 1;
}

