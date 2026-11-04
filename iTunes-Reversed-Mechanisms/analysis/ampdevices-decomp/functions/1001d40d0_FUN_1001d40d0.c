// name: FUN_1001d40d0
// address: 1001d40d0

undefined8 FUN_1001d40d0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b37e6(uVar2);
    }
  }
  else {
    if (*param_1 != 0x7374726d) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b3684(uVar2);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006b36fa(uVar2);
        }
        goto LAB_1001d4180;
      }
    }
    if ((char)param_1[0x254] == '\0') {
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b3770(uVar2);
    }
  }
LAB_1001d4180:
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

