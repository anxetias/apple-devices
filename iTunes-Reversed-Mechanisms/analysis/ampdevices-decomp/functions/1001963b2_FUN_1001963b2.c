// name: FUN_1001963b2
// address: 1001963b2

undefined8 FUN_1001963b2(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006955d8(uVar4);
    }
  }
  else {
    lVar2 = _CGImageSourceCreateWithData(param_1,0);
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)PTR__kUTTypePNG_10082e568;
      uVar3 = _CGImageSourceGetType(lVar2);
      cVar1 = FUN_100169da8(uVar4,uVar3);
      if (cVar1 == '\0') {
        uVar4 = FUN_1001962a8(lVar2);
      }
      else {
        uVar4 = FUN_1001705fc(param_1);
      }
      FUN_10017060f(lVar2);
      return uVar4;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100695562(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

