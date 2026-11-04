// name: FUN_100199fbe
// address: 100199fbe

undefined8 FUN_100199fbe(int *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6874646c)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069837c(uVar3);
    }
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100698306(uVar3);
    }
  }
  else if (param_1[1] < 1) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069821a(uVar3);
    }
  }
  else {
    if (*(long *)(param_1 + 0x1a) != 0) {
      lVar2 = FUN_10016af24();
      if (lVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = FUN_100174746(lVar2);
        uVar3 = FUN_1001705fc(uVar3);
        *param_2 = uVar3;
        uVar3 = 0;
      }
      FUN_10017060f(lVar2);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100698290(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

