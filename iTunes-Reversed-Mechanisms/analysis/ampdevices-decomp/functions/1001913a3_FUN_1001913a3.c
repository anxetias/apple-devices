// name: FUN_1001913a3
// address: 1001913a3

undefined8
FUN_1001913a3(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100694162(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = FUN_10019184c(param_1,0,param_2,param_3,param_5,param_6,param_7,1);
  }
  return uVar2;
}

