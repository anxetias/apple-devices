// name: FUN_100505a29
// address: 100505a29

int FUN_100505a29(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  int local_14;
  
  local_14 = (int)((ulong)in_RAX >> 0x20);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_1005bc79d(param_1,&local_14);
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = FUN_100177d88();
      iVar2 = iVar2 - local_14;
    }
  }
  return iVar2;
}

