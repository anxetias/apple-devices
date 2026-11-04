// name: FUN_10016a42c
// address: 10016a42c

undefined8
FUN_10016a42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100172fc4(DAT_1008c4d90);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100677fd6(uVar3);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100173093(lVar2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = _CFPropertyListCreateWithStream(param_1,lVar2,0,param_3,0,param_4);
      FUN_1001730da(lVar2);
    }
  }
  FUN_10017060f(lVar2);
  return uVar3;
}

