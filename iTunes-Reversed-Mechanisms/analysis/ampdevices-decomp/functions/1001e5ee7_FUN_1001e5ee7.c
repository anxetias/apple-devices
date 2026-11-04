// name: FUN_1001e5ee7
// address: 1001e5ee7

undefined8 FUN_1001e5ee7(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_100172473(DAT_1008c4d90,param_1,0x8000100);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006bf4a2(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

