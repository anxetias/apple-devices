// name: FUN_1001ca907
// address: 1001ca907

undefined8 FUN_1001ca907(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  
  if (param_2 < 1) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ad312(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x10);
    uVar3 = 0;
    iVar4 = 0;
    if (plVar5 != (long *)0x0) {
      iVar4 = 0;
      do {
        plVar1 = plVar5 + 4;
        plVar5 = (long *)*plVar5;
        iVar4 = iVar4 + (uint)(*(int *)(*plVar1 + 4) == 0x61746164);
      } while (plVar5 != (long *)0x0);
    }
    if (iVar4 < param_2) {
      uVar3 = 0xffffffce;
    }
  }
  return uVar3;
}

