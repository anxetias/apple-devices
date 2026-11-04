// name: FUN_10015a525
// address: 10015a525

void FUN_10015a525(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066ac03(uVar2);
    }
  }
  else {
    if (0 < param_1[3]) {
      param_1[3] = param_1[3] + -1;
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066ab8d(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

