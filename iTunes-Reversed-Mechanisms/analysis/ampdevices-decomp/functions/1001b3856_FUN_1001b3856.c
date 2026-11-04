// name: FUN_1001b3856
// address: 1001b3856

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b3856(long param_1,long param_2)

{
  double dVar1;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_38;
  undefined8 uStack_30;
  
  if (param_2 != 0) {
    FUN_1001b4c94(param_1,&stack0x00000008,local_58);
    local_38 = (double)CONCAT44(uStack_4c,uStack_50);
    dVar1 = (double)_CGRectGetMaxY();
    _CGContextTranslateCTM(0,SUB84(local_38 + dVar1,0),param_2);
    _CGContextScaleCTM((int)DAT_100700458,(int)DAT_100700af8,param_2);
    _CGContextClipToMask(param_2,*(undefined8 *)(param_1 + 0x48));
    _CGContextScaleCTM((int)DAT_100700458,(int)DAT_100700af8,param_2);
    local_38 = (double)CONCAT44(uStack_4c,uStack_50);
    uStack_30 = 0;
    dVar1 = (double)_CGRectGetMaxY();
    _CGContextTranslateCTM(0,SUB84(local_38 + dVar1,0) ^ _DAT_100700b30,param_2);
  }
  return;
}

