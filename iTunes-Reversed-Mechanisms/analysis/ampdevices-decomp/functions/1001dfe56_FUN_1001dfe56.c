// name: FUN_1001dfe56
// address: 1001dfe56

void FUN_1001dfe56(long param_1,int param_2,short param_3,undefined2 param_4)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(short *)(param_1 + lVar1 * 2) == param_3) {
        *(undefined2 *)(param_1 + lVar1 * 2) = param_4;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}

