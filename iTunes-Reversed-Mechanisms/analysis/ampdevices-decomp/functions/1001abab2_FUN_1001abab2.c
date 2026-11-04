// name: FUN_1001abab2
// address: 1001abab2

undefined8 * FUN_1001abab2(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  long *plVar3;
  long *plVar4;
  long local_28;
  long local_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 != 0) {
    local_20 = _CFURLCopyQueryString(*param_2,0);
    if (local_20 != 0) {
      plVar3 = &local_20;
      lVar1 = _CFStringCreateArrayBySeparatingStrings(DAT_1008c4d98,local_20,&cf__);
      local_28 = lVar1;
      if (lVar1 != 0) {
        plVar4 = &local_28;
        uVar2 = _CFArrayGetCount(lVar1);
        _CFArrayApplyFunction(lVar1,0,uVar2,FUN_1001abb95,param_1,in_R9,plVar3,plVar4);
        _CFRelease(local_28);
      }
      _CFRelease(local_20);
    }
  }
  return param_1;
}

