// name: FUN_10017d0ec
// address: 10017d0ec

int FUN_10017d0ec(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100685362(uVar4);
    }
  }
  else {
    if (*(code **)(param_1 + 0x11c) != (code *)0x0) {
      iVar2 = (**(code **)(param_1 + 0x11c))();
      iVar3 = iVar2;
      if (iVar2 == -4) {
        iVar3 = 0;
      }
      if (iVar2 == -0x592) {
        iVar3 = 0;
      }
      if (iVar2 != -0xcac) {
        return iVar3;
      }
      return 0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006852ec(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

