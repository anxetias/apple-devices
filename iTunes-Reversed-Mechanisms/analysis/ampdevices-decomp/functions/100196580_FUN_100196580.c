// name: FUN_100196580
// address: 100196580

undefined8 FUN_100196580(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069579c(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    uVar2 = FUN_1001705fc(param_2);
    FUN_10017060f(*(undefined8 *)(param_1 + 8));
    uVar4 = 0;
    lVar3 = FUN_100171413(DAT_1008c4d90,0,uVar2);
    *(long *)(param_1 + 8) = lVar3;
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100695726(uVar4);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffff94;
    }
    FUN_10017060f(uVar2);
  }
  return uVar4;
}

