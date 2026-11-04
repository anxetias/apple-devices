// name: FUN_1001ca647
// address: 1001ca647

undefined8 FUN_1001ca647(long param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  
  if (param_2 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006acfe2(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_1 != 0) {
      plVar5 = *(long **)(param_1 + 0x10);
      iVar4 = 0;
      if (plVar5 != (long *)0x0) {
        iVar4 = 0;
        do {
          plVar1 = plVar5 + 4;
          plVar5 = (long *)*plVar5;
          iVar4 = iVar4 + (uint)(*(int *)(*plVar1 + 4) == 0x61746164);
        } while (plVar5 != (long *)0x0);
      }
      *param_2 = iVar4;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006acf6c(uVar3);
    }
    FUN_1001782e9(0,0);
    *param_2 = 0;
  }
  return 0xffffffce;
}

