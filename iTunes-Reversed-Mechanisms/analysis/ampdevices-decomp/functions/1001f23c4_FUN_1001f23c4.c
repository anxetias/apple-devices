// name: FUN_1001f23c4
// address: 1001f23c4

void FUN_1001f23c4(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c6025(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((char)param_1[0xe] != '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006c5faf(uVar2);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001f2450(param_1);
    FUN_1001c64c1(param_1);
  }
  return;
}

