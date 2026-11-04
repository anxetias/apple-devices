// name: FUN_10019bec8
// address: 10019bec8

long FUN_10019bec8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 local_40 [16];
  
  uVar3 = DAT_1008c4d90;
  FUN_1001b7a5c(local_40,param_1);
  lVar2 = FUN_10016ab90(uVar3,local_40,0);
  FUN_1001b7a50(local_40);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006993ee(uVar3);
    }
    lVar5 = 0;
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      lVar2 = 0;
      goto LAB_10019bfd9;
    }
  }
  if ((param_3 & 4) == 0) {
    ppuVar4 = &PTR_cf_GET_10083c4a0;
  }
  else {
    ppuVar4 = &PTR_cf_POST_10083c4a8;
  }
  lVar5 = FUN_100171969(DAT_1008c4d90,*ppuVar4,lVar2,*(undefined8 *)PTR__kCFHTTPVersion1_1_10082d5c8
                       );
  if (lVar5 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100699464(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      FUN_10017060f(lVar2);
      lVar2 = 0;
      lVar5 = 0;
      goto LAB_10019bfd9;
    }
  }
  cVar1 = FUN_1001b8428(param_2);
  if (cVar1 == '\0') {
    FUN_10016939d(lVar5,PTR_cf_User_Agent_10083c510,param_2);
  }
LAB_10019bfd9:
  FUN_10017060f(lVar2);
  return lVar5;
}

