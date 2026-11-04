// name: FUN_1001dfaed
// address: 1001dfaed

void FUN_1001dfaed(long param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_4 != 0) {
    uVar2 = param_4 - 1U;
    if (param_2 <= param_4 - 1U) {
      uVar2 = param_2;
    }
    if (uVar2 != 0) {
      uVar1 = 0;
      do {
        param_3[uVar1] = *(undefined1 *)(param_1 + uVar1);
        uVar1 = uVar1 + 1;
      } while (uVar2 != uVar1);
      param_3 = param_3 + uVar1;
    }
    *param_3 = 0;
  }
  return;
}

