// name: FUN_10019540c
// address: 10019540c

long FUN_10019540c(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  long lVar3;
  
  if (DAT_1008906c0 != 0) {
    return DAT_1008906c0;
  }
  lVar3 = DAT_1008906c0;
  DAT_1008906c0 = _CGColorSpaceCreateWithName(*(undefined8 *)PTR__kCGColorSpaceSRGB_10082e378);
  if (DAT_1008906c0 == 0) {
    uVar2 = _CGDataProviderCreateWithData(0,&DAT_10070e650,0xc48,0,in_R8,in_R9,lVar3);
    DAT_1008906c0 = _CGColorSpaceCreateICCBased(3,0,uVar2,0);
    _CGDataProviderRelease(uVar2);
    if (DAT_1008906c0 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100695312(uVar2);
      }
      FUN_1001782e9(0,0);
    }
  }
  return DAT_1008906c0;
}

