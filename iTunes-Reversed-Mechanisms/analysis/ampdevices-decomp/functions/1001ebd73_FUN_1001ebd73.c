// name: FUN_1001ebd73
// address: 1001ebd73

ulong FUN_1001ebd73(void)

{
  char cVar1;
  ulong uVar2;
  
  if (DAT_10088f69c != 0xffffffff) {
    return (ulong)DAT_10088f69c;
  }
  cVar1 = _CFBundleGetLocalizationInfoForLocalization(0,0,0,0,&DAT_10088f69c);
  if (cVar1 == '\0') {
    uVar2 = _CFStringGetSystemEncoding();
    DAT_10088f69c = (uint)uVar2;
  }
  else {
    uVar2 = (ulong)DAT_10088f69c;
  }
  return uVar2;
}

