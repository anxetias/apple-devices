// name: FUN_1001c43c4
// address: 1001c43c4

undefined4
FUN_1001c43c4(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long *param_9)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_9 != (long *)0x0) {
    *param_9 = 0;
  }
  lVar3 = FUN_1001c3dbc(0xffff8002,param_1,param_2);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a74e2(uVar4);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1001c4194(lVar3,param_3,param_4,param_5);
    }
    if (param_6 != 0) {
      uVar2 = FUN_1001c42a9(lVar3,param_6,param_7,param_8);
    }
    if (param_9 != (long *)0x0) {
      *param_9 = lVar3;
    }
  }
  return uVar2;
}

