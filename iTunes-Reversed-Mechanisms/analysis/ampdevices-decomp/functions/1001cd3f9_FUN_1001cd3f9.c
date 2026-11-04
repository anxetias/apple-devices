// name: FUN_1001cd3f9
// address: 1001cd3f9

undefined8 FUN_1001cd3f9(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_1001725a7(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006af250(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

