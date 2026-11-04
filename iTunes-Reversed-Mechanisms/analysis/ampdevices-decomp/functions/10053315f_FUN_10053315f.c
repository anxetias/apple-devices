// name: FUN_10053315f
// address: 10053315f

ulong FUN_10053315f(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 == 0x80) {
    lVar1 = FUN_100588e6f();
    return (ulong)*(byte *)(lVar1 + 4);
  }
  uVar2 = FUN_1002794b5();
  FUN_1001cd3f9(uVar2);
  uVar2 = FUN_1002794b5();
  uVar3 = FUN_1001ce35c(uVar2,0x626f6f6b,param_1 & 0xff,"Location");
  return uVar3;
}

