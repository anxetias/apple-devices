// name: FUN_100170214
// address: 100170214

long FUN_100170214(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = _CFURLCreateResourcePropertyForKeyFromBookmarkData
                    (param_1,*(undefined8 *)PTR__kCFURLPathKey_10082e158,param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = _CFURLCreateWithFileSystemPath
                      (*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,lVar1,0,1);
    FUN_10017060f(lVar1);
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar3 = 0xffffffd5;
    if (lVar2 != 0) {
      uVar3 = 0;
    }
    *param_3 = uVar3;
  }
  return lVar2;
}

