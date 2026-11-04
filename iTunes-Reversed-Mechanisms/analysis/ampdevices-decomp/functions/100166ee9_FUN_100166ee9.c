// name: FUN_100166ee9
// address: 100166ee9

ulong FUN_100166ee9(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined7 uVar5;
  ulong uVar4;
  undefined8 local_38;
  undefined1 local_30 [16];
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFStringGetTypeID();
    uVar5 = (undefined7)((ulong)param_1 >> 8);
    if (lVar2 == lVar3) {
      FUN_1001b7eb0(local_30,param_1);
      FUN_1001b80b2(param_2,local_30);
      FUN_1001b7a50(local_30);
      uVar4 = CONCAT71(uVar5,1);
    }
    else {
      cVar1 = FUN_100165026(param_1,&local_38);
      uVar4 = CONCAT71(uVar5,cVar1 != '\0');
      if (cVar1 != '\0') {
        FUN_1001b90b6(local_30,local_38);
        FUN_1001b80b2(param_2,local_30);
        FUN_1001b7a50(local_30);
      }
    }
  }
  return uVar4 & 0xffffffff;
}

