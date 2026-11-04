// name: FUN_1001964d2
// address: 1001964d2

undefined1 * FUN_1001964d2(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    if (*(long *)(param_2 + 8) != 0) {
      iVar2 = FUN_100196580(param_1);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10069564e(iVar2,uVar3);
        }
      }
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      iVar2 = FUN_100196642(param_1);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006956ba(iVar2,uVar3);
        }
      }
    }
  }
  return param_1;
}

