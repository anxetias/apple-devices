// name: FUN_10046ca88
// address: 10046ca88

void FUN_10046ca88(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((param_1 != 0x110) && (param_1 != 0x102)) {
    return;
  }
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar1 = _CFDictionaryGetTypeID();
    lVar2 = _CFGetTypeID(param_2);
    lVar6 = 0;
    if (lVar1 == lVar2) {
      lVar6 = param_2;
    }
  }
  uVar3 = FUN_100166c1b(lVar6,*(undefined8 *)PTR__kCFBundleIdentifierKey_10082e048);
  uVar4 = FUN_100166c1b(lVar6,*(undefined8 *)PTR__kCFBundleNameKey_10082e050);
  uVar5 = FUN_1001c156e();
  FUN_1001c6987(uVar5,(uint)(param_1 != 0x110) * 8 + 0x6170646c,uVar3,uVar4,0);
  return;
}

