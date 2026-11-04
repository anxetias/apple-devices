// name: FUN_1001dcc15
// address: 1001dcc15

undefined8 FUN_1001dcc15(int *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006b7f9d(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    if (*(long *)(param_1 + 2) != 0) {
      FUN_1001c6209();
    }
    if (*(long *)(param_1 + 4) != 0) {
      FUN_1001c6209();
    }
    if (*(long *)(param_1 + 6) != 0) {
      FUN_1001c6209();
    }
    if (*(long *)(param_1 + 8) != 0) {
      FUN_1001c6209();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x12);
    if (puVar1 != (undefined8 *)0x0) {
      _free((void *)*puVar1);
      operator_delete(puVar1);
    }
    FUN_1001c62d9(param_1,0x50);
    uVar3 = 0;
  }
  return uVar3;
}

