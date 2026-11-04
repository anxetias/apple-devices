// name: FUN_1001c2203
// address: 1001c2203

undefined8 FUN_1001c2203(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1001c227b();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a5a83(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xfffffffc;
  }
  else {
    FUN_10017393c(lVar2,param_1,param_2,0x8000100);
    FUN_10017060f(lVar2);
    uVar3 = 0;
  }
  return uVar3;
}

