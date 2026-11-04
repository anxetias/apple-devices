// name: FUN_10035c312
// address: 10035c312

undefined8 FUN_10035c312(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong local_20;
  
  iVar1 = FUN_10017ce92(*(undefined8 *)(param_1 + 0x28),&local_20);
  uVar2 = 0x60a;
  if ((iVar1 == 0) && (uVar2 = 0, param_2 < local_20)) {
    iVar1 = FUN_10017cf3c(*(undefined8 *)(param_1 + 0x28),param_2);
    uVar2 = 0x60a;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

