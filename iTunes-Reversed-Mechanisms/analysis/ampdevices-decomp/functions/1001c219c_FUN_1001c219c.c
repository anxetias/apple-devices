// name: FUN_1001c219c
// address: 1001c219c

undefined8 FUN_1001c219c(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100171d7b();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a5a0d(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100171e5b(lVar2);
    uVar3 = FUN_1001705fc(uVar3);
    FUN_10017060f(lVar2);
  }
  return uVar3;
}

