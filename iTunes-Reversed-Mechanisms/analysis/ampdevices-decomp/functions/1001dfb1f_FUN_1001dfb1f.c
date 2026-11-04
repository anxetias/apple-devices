// name: FUN_1001dfb1f
// address: 1001dfb1f

void FUN_1001dfb1f(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  
  if (param_2 == (char *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba6c9(uVar2);
    }
  }
  else {
    *param_2 = '\0';
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      if (cVar1 == '\0') {
        return;
      }
      lVar3 = 1;
      cVar4 = '\0';
      do {
        if (cVar4 == param_3) {
          return;
        }
        param_2[lVar3] = cVar1;
        cVar4 = *param_2 + '\x01';
        *param_2 = cVar4;
        cVar1 = param_1[lVar3];
        lVar3 = lVar3 + 1;
      } while (cVar1 != '\0');
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba653(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

