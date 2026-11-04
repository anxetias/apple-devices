// name: FUN_1001660b3
// address: 1001660b3

undefined8
FUN_1001660b3(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar2 = FUN_100170f3b();
    uVar3 = FUN_100170ef7(param_1);
    uVar2 = FUN_100180478(uVar2,uVar3,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100673636(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

