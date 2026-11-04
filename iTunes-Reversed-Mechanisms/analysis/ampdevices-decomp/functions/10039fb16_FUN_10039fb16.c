// name: FUN_10039fb16
// address: 10039fb16

long FUN_10039fb16(undefined8 param_1,void *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar3 = _CFDataGetLength();
  uVar5 = param_3;
  if (uVar3 < param_3) {
    uVar5 = uVar3;
  }
  pvVar4 = (void *)_CFDataGetBytePtr(param_1);
  iVar2 = _memcmp(pvVar4,param_2,uVar5);
  iVar1 = (int)uVar3 - (int)param_3;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = iVar1 >> 0x1f;
  }
  return (long)iVar2;
}

