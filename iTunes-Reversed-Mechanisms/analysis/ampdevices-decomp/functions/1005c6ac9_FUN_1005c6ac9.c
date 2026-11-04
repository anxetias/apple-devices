// name: FUN_1005c6ac9
// address: 1005c6ac9

void FUN_1005c6ac9(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = _CFStringGetTypeID();
    lVar1 = FUN_1005b8d4a(param_1,0,param_4,uVar2);
    if (lVar1 != 0) {
      FUN_100171502(param_3,param_5,lVar1);
      FUN_10017060f(lVar1);
      return;
    }
  }
  else {
    lVar1 = FUN_100166c1b(param_2,param_4);
    if (lVar1 != 0) {
      FUN_100171502(param_3,param_5,lVar1);
      return;
    }
  }
  return;
}

