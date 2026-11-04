// name: FUN_1001962a8
// address: 1001962a8

long FUN_1001962a8(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006954ec(uVar4);
    }
  }
  else {
    lVar2 = FUN_100170ea9(0,0);
    if (lVar2 != 0) {
      lVar3 = _CGImageDestinationCreateWithData(lVar2,*(undefined8 *)PTR__kUTTypePNG_10082e568,1,0);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_100695400(uVar4);
        }
        lVar3 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        _CGImageDestinationAddImageFromSource(lVar3,param_1,0,0);
        cVar1 = _CGImageDestinationFinalize(lVar3);
        if (cVar1 == '\0') {
          FUN_10017060f(lVar2);
          lVar2 = 0;
        }
      }
      goto LAB_100196361;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100695476(uVar4);
    }
  }
  lVar2 = 0;
  FUN_1001782e9(0,0);
  lVar3 = 0;
LAB_100196361:
  FUN_10017060f(lVar3);
  return lVar2;
}

