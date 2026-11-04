// name: FUN_100474f2b
// address: 100474f2b

bool FUN_100474f2b(long param_1)

{
  ulong uVar1;
  bool bVar2;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0xc5) & 2) == 0)) {
    bVar2 = false;
  }
  else {
    uVar1 = FUN_100474dd0(param_1,0);
    bVar2 = (uVar1 & 0x200004) != 0;
  }
  return bVar2;
}

