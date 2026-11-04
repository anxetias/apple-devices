// name: FUN_1001c2e6b
// address: 1001c2e6b

long FUN_1001c2e6b(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a6a2f(uVar2);
    }
    lVar3 = 0;
    FUN_1001782e9(0,1);
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1001c2d56(param_1,lVar3);
    }
  }
  return lVar3;
}

