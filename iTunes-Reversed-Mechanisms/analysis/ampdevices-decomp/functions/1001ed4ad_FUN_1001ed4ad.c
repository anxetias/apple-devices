// name: FUN_1001ed4ad
// address: 1001ed4ad

undefined8 FUN_1001ed4ad(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_1001ed295(param_1,0,0,param_2);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006c4ce1(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

