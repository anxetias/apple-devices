// name: FUN_1001c93e6
// address: 1001c93e6

undefined8 FUN_1001c93e6(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab964(uVar3);
    }
  }
  else {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      if (*(long *)(param_1 + 6) == 0) {
        return 0;
      }
      plVar4 = *(long **)(*(long *)(param_1 + 6) + 0x10);
      if (plVar4 == (long *)0x0) {
        return 0;
      }
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      *param_2 = iVar2;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab8ee(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

