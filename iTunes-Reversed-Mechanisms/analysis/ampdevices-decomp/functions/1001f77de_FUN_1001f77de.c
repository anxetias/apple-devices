// name: FUN_1001f77de
// address: 1001f77de

bool FUN_1001f77de(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    bVar3 = false;
  }
  else {
    if (*param_1 != 0x7a697066) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006c8fb1(uVar2);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') {
        return false;
      }
    }
    bVar3 = true;
    if (*(long *)(param_1 + 0x10a) == 0) {
      bVar3 = *(long *)(param_1 + 0x10c) != 0;
    }
  }
  return bVar3;
}

