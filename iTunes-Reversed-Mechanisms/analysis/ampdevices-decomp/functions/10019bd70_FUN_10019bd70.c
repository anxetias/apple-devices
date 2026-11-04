// name: FUN_10019bd70
// address: 10019bd70

undefined8 FUN_10019bd70(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_1001ed4fd(*(undefined8 *)(param_1 + 8),FUN_10019bdcb,param_1,1);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100699302(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

