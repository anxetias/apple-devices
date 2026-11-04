// name: FUN_1001a6371
// address: 1001a6371

undefined4 FUN_1001a6371(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_30 [16];
  
  uVar3 = FUN_1001b83ae();
  uVar2 = FUN_1001b83f0(param_1);
  if ((param_2 == 0) && (cVar1 = FUN_1001a472c(uVar3,uVar2), cVar1 == '\0')) {
    return 0xffffffca;
  }
  FUN_1001b7a5c(local_30,param_1);
  lVar4 = FUN_10016ab90(0,local_30,0);
  FUN_1001b7a50(local_30);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069e130(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffff94;
  }
  else {
    uVar2 = _LSOpenCFURLRef(lVar4,0);
    FUN_10017060f(lVar4);
  }
  return uVar2;
}

