// name: FUN_1001ab6d2
// address: 1001ab6d2

undefined8 *
FUN_1001ab6d2(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_50 [2];
  long local_40;
  undefined1 local_38 [16];
  long *local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 != 0) {
    FUN_1001b7b04(local_50,"&");
    FUN_1001b7a5c(local_38,param_3);
    FUN_1001bbcfe(local_38,local_50);
    FUN_1001b7a50(local_50);
    lVar1 = *param_2;
    local_28 = (long *)FUN_1001b8d0c(local_38);
    lVar1 = _CFURLCopyQueryString(lVar1,local_28);
    FUN_10016d588(&local_28);
    local_50[0] = lVar1;
    if (lVar1 != 0) {
      local_28 = local_50;
      lVar1 = _CFStringCreateArrayBySeparatingStrings(DAT_1008c4d98,lVar1,&cf__);
      local_40 = lVar1;
      if (lVar1 != 0) {
        plVar3 = &local_40;
        uVar2 = _CFArrayGetCount(lVar1);
        _CFArrayApplyFunction(lVar1,0,uVar2,FUN_1001ab84e,param_1,param_6,plVar3);
        _CFRelease(local_40);
      }
      _CFRelease(local_50[0]);
    }
    FUN_1001b7a50(local_38);
  }
  return param_1;
}

