// name: FUN_10016aaf8
// address: 10016aaf8

undefined8 FUN_10016aaf8(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_1001704bb();
    uVar2 = _CFPropertyListCreateData(uVar2,param_2,200,0,param_3);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006786b6(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

