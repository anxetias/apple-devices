// name: FUN_1002ac6f9
// address: 1002ac6f9

bool FUN_1002ac6f9(long param_1)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  
  cVar1 = FUN_1002bd328();
  if ((cVar1 == '\0') || ((*(ushort *)(param_1 + 0xc3) & 0x8080) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    uVar2 = FUN_1004744bf(param_1,0);
    if ((uVar2 & 0x1d7dcfa) == 0) {
      cVar1 = FUN_1004743e5(param_1);
      bVar3 = cVar1 == '\0';
    }
  }
  return bVar3;
}

