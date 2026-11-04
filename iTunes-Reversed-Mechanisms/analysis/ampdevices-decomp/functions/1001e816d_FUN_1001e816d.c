// name: FUN_1001e816d
// address: 1001e816d

undefined8 FUN_1001e816d(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _CFBundleGetLocalizationInfoForLocalization(0,0,0,0);
  if (cVar1 == '\0') {
    uVar2 = _CFStringGetSystemEncoding();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

