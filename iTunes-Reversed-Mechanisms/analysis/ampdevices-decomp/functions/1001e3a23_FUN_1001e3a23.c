// name: FUN_1001e3a23
// address: 1001e3a23

void FUN_1001e3a23(ushort *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (ushort *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bce8a(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    while ((*param_1 != 0 && (iVar2 = FUN_1001e39bb(param_1[*param_1]), iVar2 == 8))) {
      FUN_1001dffe0(param_1,*param_1,1);
    }
  }
  return;
}

