// name: FUN_100169885
// address: 100169885

long FUN_100169885(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_100174ba8(0,param_1,param_2);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100677554(uVar4);
    }
  }
  else {
    lVar3 = FUN_100174bb2(0,lVar2);
    if (lVar3 != 0) goto LAB_1001698fb;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006774de(uVar4);
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1001698fb:
  FUN_10017060f(lVar2);
  return lVar3;
}

