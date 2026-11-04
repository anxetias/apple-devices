// name: FUN_1001c5577
// address: 1001c5577

undefined8 FUN_1001c5577(long param_1,ulong param_2,undefined8 *param_3,ulong *param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a861a(uVar3);
    }
  }
  else {
    do {
      uVar4 = plVar2[3];
      if (param_2 < (ulong)plVar2[3]) {
        uVar4 = param_2;
      }
      param_2 = param_2 - uVar4;
      if (param_2 == 0) {
        *param_3 = plVar2;
        *param_4 = uVar4;
        return 0;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a85a4(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffdc;
}

