// name: FUN_1005c675e
// address: 1005c675e

ulong FUN_1005c675e(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  cVar1 = FUN_1001ee068();
  if (cVar1 != '\0') {
    iVar2 = FUN_1005c81f5(0,param_1,0x1e,0,0);
    return (ulong)((uint)(iVar2 != 0) * 3);
  }
  uVar3 = _AMSUnregisterTarget(param_1);
  return uVar3;
}

