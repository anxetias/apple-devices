// name: FUN_10016ab90
// address: 10016ab90

undefined8 FUN_10016ab90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1001b8d0c(param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067872e(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1001704bb(param_1);
    uVar3 = _CFURLCreateWithString(uVar3,lVar2,param_3);
    FUN_10017060f(lVar2);
  }
  return uVar3;
}

