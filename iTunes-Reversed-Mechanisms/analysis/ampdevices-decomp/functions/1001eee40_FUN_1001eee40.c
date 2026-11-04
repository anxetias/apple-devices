// name: FUN_1001eee40
// address: 1001eee40

undefined8 * FUN_1001eee40(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = &DAT_1008a2b48;
  do {
    puVar3 = (undefined8 *)*puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  } while (puVar3[2] != param_1);
  if (*(int *)(puVar3 + 1) != 0x74696d72) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c58c8(uVar2);
    }
    puVar3 = (undefined8 *)0x0;
    FUN_1001782e9(0,0);
  }
  return puVar3;
}

