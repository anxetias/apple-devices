// name: FUN_1001c5dea
// address: 1001c5dea

undefined8 FUN_1001c5dea(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = 1;
    if (*(int *)(param_1 + 8) != 0x4d656d48) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006a8edc(uVar2);
      }
      uVar2 = FUN_1001782e9(0,1);
    }
    return uVar2;
  }
  return 0;
}

