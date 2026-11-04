// name: FUN_100199903
// address: 100199903

undefined8 FUN_100199903(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6874646c)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100697d06(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = 0;
    if (0xffffff9c < param_1[1] - 100U) {
      uVar2 = FUN_10019bd70(param_1 + 0x1a);
      param_1[1] = 100;
    }
  }
  return uVar2;
}

