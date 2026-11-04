// name: FUN_1001f1744
// address: 1001f1744

undefined8 FUN_1001f1744(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  uint in_EAX;
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_38;
  
  uStack_38 = (ulong)in_EAX;
  iVar1 = FUN_1001f17b2();
  if (iVar1 == 0) {
    uVar4 = (ulong)uStack_38._4_4_;
    uVar2 = FUN_1001f17b2(param_1,param_2,(long)&uStack_38 + 4);
    uVar3 = 0;
    if ((int)uVar2 == 0) {
      uVar3 = (long)uStack_38._4_4_ << 8 | uVar4;
    }
  }
  else {
    uVar2 = 0xffffffff;
    uVar3 = 0;
  }
  *param_3 = uVar3;
  return uVar2;
}

