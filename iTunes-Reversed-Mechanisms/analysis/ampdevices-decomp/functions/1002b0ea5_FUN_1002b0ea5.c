// name: FUN_1002b0ea5
// address: 1002b0ea5

void FUN_1002b0ea5(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0x53485244) {
    piVar2 = (int *)(param_1 + 0x90);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  else {
    if ((iVar1 != 0x48545450) && (iVar1 != 0x46494c45)) {
      return;
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    piVar2 = (int *)(param_1 + 0xa0);
    if (*(long *)(param_1 + 0x98) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  if (*piVar2 != 0) {
    *piVar2 = 0;
  }
  return;
}

