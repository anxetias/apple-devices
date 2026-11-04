// name: FUN_100160c3f
// address: 100160c3f

undefined8 FUN_100160c3f(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long local_20;
  
  uVar1 = FUN_1001d7456(*(undefined8 *)(param_1 + 8));
  if (((int)uVar1 == 0) && (uVar1 = 0, *(char *)(param_1 + 5) == '\0')) {
    uVar1 = FUN_1001d7569(*(undefined8 *)(param_1 + 8),&local_20);
    if ((int)uVar1 == 0) {
      iVar2 = (int)*(ulong *)(param_1 + 0x20);
      if (*(char *)(param_1 + 5) == '\0') {
        iVar2 = iVar2 - (int)*(undefined8 *)(param_1 + 0x30);
      }
      else if (*(ulong *)(param_1 + 0x38) < *(ulong *)(param_1 + 0x20)) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((int)*(ulong *)(param_1 + 0x38) - iVar2) + 1;
      }
      if (*param_2 < (ulong)(iVar2 + local_20)) {
        *param_2 = iVar2 + local_20;
      }
    }
  }
  return uVar1;
}

