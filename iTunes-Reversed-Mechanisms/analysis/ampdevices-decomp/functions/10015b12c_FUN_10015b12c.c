// name: FUN_10015b12c
// address: 10015b12c

long FUN_10015b12c(int *param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066b8d7(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066b861(uVar2);
    }
  }
  else {
    if (param_2 <= (uint)param_1[2]) {
      lVar3 = FUN_10015b0db(param_1);
      return (ulong)((param_2 - 1) * param_1[1]) + lVar3;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066b7eb(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

