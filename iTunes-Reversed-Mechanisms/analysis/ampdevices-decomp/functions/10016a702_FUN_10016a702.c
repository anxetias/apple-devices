// name: FUN_10016a702
// address: 10016a702

long FUN_10016a702(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_100170e14(DAT_1008c4d90,param_2,param_3,*(undefined8 *)PTR__kCFAllocatorNull_10082e028
                       );
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100678288(uVar4);
    }
  }
  else {
    lVar3 = FUN_100172686(param_1,lVar2,param_4,0,param_5);
    if (lVar3 != 0) goto LAB_10016a79a;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100678212(uVar4);
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_10016a79a:
  FUN_10017060f(lVar2);
  return lVar3;
}

