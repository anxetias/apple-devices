// name: FUN_10015bc91
// address: 10015bc91

ulong FUN_10015bc91(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  short sVar4;
  int iVar5;
  
  cVar1 = FUN_10015b91e();
  if (cVar1 == '\0') {
    sVar4 = -0x83a;
  }
  else {
    lVar2 = FUN_1001c627e(param_1);
    iVar5 = 0xc;
    if (param_2 != 0) {
      iVar5 = param_2;
    }
    sVar4 = -0x836;
    if (*(short *)(lVar2 + 0xe + (long)iVar5) == 0) {
      uVar3 = FUN_10015bcfd(param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  return (ulong)(uint)(int)sVar4;
}

