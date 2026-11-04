// name: FUN_1001ce44b
// address: 1001ce44b

undefined8 FUN_1001ce44b(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0 || param_4 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006af8c4(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_4,0x20);
    uVar2 = FUN_1001705fc(param_1);
    *(undefined8 *)(param_4 + 2) = uVar2;
    *(undefined8 *)(param_4 + 4) = param_2;
    *(undefined8 *)(param_4 + 6) = param_3;
    *param_4 = 0x70726566;
    uVar2 = 0;
  }
  return uVar2;
}

