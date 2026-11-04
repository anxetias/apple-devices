// name: FUN_1001dd16c
// address: 1001dd16c

bool FUN_1001dd16c(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b8861(uVar2);
    }
    bVar3 = false;
    FUN_1001782e9(0,0);
  }
  else if (*param_1 < 0) {
    bVar3 = false;
  }
  else {
    bVar3 = 0 < param_1[1];
  }
  return bVar3;
}

