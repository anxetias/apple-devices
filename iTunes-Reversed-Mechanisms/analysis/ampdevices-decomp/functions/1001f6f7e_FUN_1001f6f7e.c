// name: FUN_1001f6f7e
// address: 1001f6f7e

undefined8 FUN_1001f6f7e(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint in_EAX;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_38;
  
  uStack_38 = (ulong)in_EAX;
  iVar1 = FUN_1001f17b2();
  if (iVar1 == 0) {
    lVar4 = (long)uStack_38._4_4_;
    uVar2 = FUN_1001f17b2(param_1,param_2,(long)&uStack_38 + 4);
    lVar3 = 0;
    if ((int)uVar2 == 0) {
      lVar3 = (long)uStack_38._4_4_ * 0x100 + lVar4;
    }
  }
  else {
    uVar2 = 0xffffffff;
    lVar3 = 0;
  }
  *param_3 = lVar3;
  return uVar2;
}

