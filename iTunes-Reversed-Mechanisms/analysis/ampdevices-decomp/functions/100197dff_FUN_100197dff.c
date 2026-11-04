// name: FUN_100197dff
// address: 100197dff

void FUN_100197dff(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_1001744bd(DAT_1008c4d98,param_2,0);
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100696b3e(uVar5);
    }
  }
  else {
    lVar3 = FUN_100171799(DAT_1008c4d98);
    if (lVar3 != 0) {
      lVar4 = FUN_1001718f6(DAT_1008c4d90,param_1,lVar2);
      if (lVar4 != 0) {
        FUN_1001717a3(lVar3,lVar4,lVar2,0);
        FUN_10017060f(lVar4);
      }
      goto LAB_100197eb1;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100696ac8(uVar5);
    }
  }
  FUN_1001782e9(0,0);
LAB_100197eb1:
  FUN_10017060f(lVar2);
  return;
}

