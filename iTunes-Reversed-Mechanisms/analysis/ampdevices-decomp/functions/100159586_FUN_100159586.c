// name: FUN_100159586
// address: 100159586

undefined1 FUN_100159586(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  ulong in_RAX;
  long lVar2;
  undefined1 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX & 0xffffffffffffff;
  *param_3 = 0;
  lVar2 = (**(code **)(*param_1 + 0x48))();
  uVar3 = 0;
  if (lVar2 != 0) {
    cVar1 = FUN_100165191(lVar2,(long)&uStack_28 + 7);
    if (cVar1 != '\0') {
      *param_3 = 1;
    }
    FUN_10017060f(lVar2);
    uVar3 = uStack_28._7_1_;
  }
  return uVar3;
}

