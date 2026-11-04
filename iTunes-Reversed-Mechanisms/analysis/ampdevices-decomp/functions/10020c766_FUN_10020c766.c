// name: FUN_10020c766
// address: 10020c766

undefined1 FUN_10020c766(undefined8 param_1,undefined8 param_2)

{
  ulong in_RAX;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX & 0xffffffffffffff;
  uVar1 = FUN_100167d88(param_1,&cf_DRMUserID);
  if (uVar1 < 2) {
    uStack_28._7_1_ = 0;
  }
  else {
    uVar2 = FUN_100167d88(param_1,&cf_DRMDownloaderUserID);
    FUN_10031e4ab(uVar1,uVar2,1,0,param_2,(long)&uStack_28 + 7);
  }
  return uStack_28._7_1_;
}

