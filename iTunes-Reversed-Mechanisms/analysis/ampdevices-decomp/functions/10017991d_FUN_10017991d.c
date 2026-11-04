// name: FUN_10017991d
// address: 10017991d

undefined8 FUN_10017991d(undefined1 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_100170f3b(param_2);
    uVar3 = FUN_100170ef7(param_2);
    uVar2 = FUN_1001798b8(param_1,uVar2,uVar3,param_3);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100683b2c(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

