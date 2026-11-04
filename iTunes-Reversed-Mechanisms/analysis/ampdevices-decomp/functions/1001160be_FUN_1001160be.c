// name: FUN_1001160be
// address: 1001160be

int FUN_1001160be(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100119958(param_1,*(undefined8 *)(param_1 + 0x48));
  iVar2 = -2;
  if (iVar1 == 0) {
    iVar1 = FUN_100119958(param_1,*(undefined8 *)(param_1 + 0x50));
    iVar2 = (uint)(iVar1 == 0) * 2 + -2;
  }
  return iVar2;
}

