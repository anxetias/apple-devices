// name: FUN_1003258cc
// address: 1003258cc

undefined4 FUN_1003258cc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long local_20;
  
  local_20 = 0;
  iVar1 = FUN_1002eb77e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_20);
  if (local_20 == 0 || iVar1 != 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100325338();
    FUN_10017060f(local_20);
  }
  return uVar2;
}

