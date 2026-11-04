// name: FUN_1001b3432
// address: 1001b3432

long FUN_1001b3432(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_100170ea9(DAT_1008c4d90,0);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0f23(uVar4);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = _CGImageDestinationCreateWithData(lVar2,*(undefined8 *)PTR__kUTTypePNG_10082e568,1,0);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a0ead(uVar4);
      }
      FUN_1001782e9(0,0);
      FUN_10017060f(lVar2);
      lVar2 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0xb8))(param_1);
      _CGImageDestinationAddImage(lVar3,uVar4,0);
      _CGImageDestinationFinalize(lVar3);
      FUN_10017060f(lVar3);
    }
  }
  return lVar2;
}

