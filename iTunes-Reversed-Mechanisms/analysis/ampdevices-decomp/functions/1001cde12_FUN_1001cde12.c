// name: FUN_1001cde12
// address: 1001cde12

ulong FUN_1001cde12(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_6 != 0) {
    lVar2 = FUN_100170dc5(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,param_6,param_5);
    if (lVar2 == 0) {
      uVar3 = 0xffffff94;
    }
    else {
      uVar1 = FUN_1001cdcf1(param_1,param_2,param_3,param_4,lVar2);
      uVar3 = (ulong)uVar1;
      _CFRelease(lVar2);
    }
    return uVar3;
  }
  uVar3 = FUN_1001cdcf1(param_1,param_2,param_3,param_4,0);
  return uVar3;
}

