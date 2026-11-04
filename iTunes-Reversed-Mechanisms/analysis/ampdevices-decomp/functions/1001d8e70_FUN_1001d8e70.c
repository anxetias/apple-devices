// name: FUN_1001d8e70
// address: 1001d8e70

undefined8 FUN_1001d8e70(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x98) == 2) {
    *(undefined1 *)(param_1 + 0x9d2) = 1;
    *(undefined4 *)(param_1 + 0x9d4) = 1;
    *(undefined8 *)(param_1 + 0x9d8) = 0;
    return 0;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006b69f4(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

