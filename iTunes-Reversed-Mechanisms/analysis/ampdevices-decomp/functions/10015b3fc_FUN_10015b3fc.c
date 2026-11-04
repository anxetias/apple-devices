// name: FUN_10015b3fc
// address: 10015b3fc

undefined1 FUN_10015b3fc(long param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((((param_1 != 0) && (uVar2 = FUN_1001c5d9c(), 0x1f < uVar2)) &&
      (lVar3 = FUN_1001c627e(param_1), *(int *)(lVar3 + 0x10) == 0x6e616573)) &&
     (*(int *)(lVar3 + 0x14) == 0x1000000)) {
    return 1;
  }
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    FUN_10066bb25(uVar4);
  }
  FUN_1001782e9(0,0);
  return 0;
}

