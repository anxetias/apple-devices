// name: FUN_1005c66f1
// address: 1005c66f1

ulong FUN_1005c66f1(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_428 [130];
  
  cVar1 = FUN_1001ee068();
  if (cVar1 != '\0') {
    local_428[0] = FUN_1001705fc(param_2);
    iVar2 = FUN_1005c81f5(0,param_1,0x1d,local_428,0);
    return (ulong)((uint)(iVar2 != 0) * 3);
  }
  uVar3 = _AMSRegisterClientWithTargetIdentifierAndDisplayName(param_1,param_2);
  return uVar3;
}

