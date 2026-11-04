// name: FUN_100169ee7
// address: 100169ee7

bool FUN_100169ee7(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0 || param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100677bb8(uVar4);
    }
  }
  else {
    lVar2 = _CFStringCreateWithCStringNoCopy
                      (DAT_1008c4d90,param_2,0x8000100,
                       *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    if (lVar2 != 0) {
      lVar3 = _CFStringCompare(param_1,lVar2,1);
      FUN_10017060f(lVar2);
      return lVar3 == 0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100677c2e(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return false;
}

