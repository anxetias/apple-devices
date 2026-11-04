// name: FUN_1001c4cf4
// address: 1001c4cf4

long FUN_1001c4cf4(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d656d62)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7c3c(uVar2);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 10) + *(long *)(param_1 + 4);
  }
  return lVar3;
}

