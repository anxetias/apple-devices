// name: FUN_1001c4e6e
// address: 1001c4e6e

long FUN_1001c4e6e(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1001c6429(0x28);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7e80(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    *(undefined8 *)(lVar2 + 0x18) = param_3;
    FUN_1001c2c8a(param_1 + 0x30,lVar2);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + *(long *)(lVar2 + 0x18);
  }
  return lVar2;
}

