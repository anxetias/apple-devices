// name: FUN_1001dffe0
// address: 1001dffe0

void FUN_1001dffe0(ushort *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (ushort *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bac25(uVar2);
    }
  }
  else {
    if ((param_2 != 0) || (param_3 - 1U <= (uint)*param_1)) {
      FUN_1001c631b(param_1 + (param_2 + param_3),param_1 + param_2,
                    ((uint)*param_1 - (param_2 + param_3)) * 2 + 2);
      *param_1 = *param_1 - (short)param_3;
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006babaf(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

