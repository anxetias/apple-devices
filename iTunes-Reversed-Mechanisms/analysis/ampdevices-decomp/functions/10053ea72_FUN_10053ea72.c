// name: FUN_10053ea72
// address: 10053ea72

void FUN_10053ea72(long param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  *(int *)(param_1 + 0x4b4) = param_2;
  *(bool *)(param_1 + 0x4b0) = param_2 != 0;
  if (param_2 != 0) {
    uVar1 = 1;
    uVar2 = 1;
    if (((param_2 != 0x4d345620) && (uVar2 = 1, param_2 != 0x4d503420)) &&
       (uVar2 = 1, param_2 != 0x4d6f6f56)) {
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 0xfd8) = uVar2;
    if (((param_2 != 0x4d345620) && (param_2 != 0x4d503420)) && (param_2 != 0x4d6f6f56)) {
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0xfd9) = uVar1;
  }
  return;
}

