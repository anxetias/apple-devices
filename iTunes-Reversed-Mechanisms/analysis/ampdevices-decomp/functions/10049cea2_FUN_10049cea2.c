// name: FUN_10049cea2
// address: 10049cea2

void FUN_10049cea2(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x4f4) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x508);
    uVar2 = 0;
    do {
      if (*(int *)(puVar1 + -2) - 1U < 2) {
        FUN_10017060f(puVar1[-1]);
        puVar1[-1] = 0;
      }
      else if (*(int *)(puVar1 + -2) == 3) {
        FUN_10017060f(*puVar1);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 5;
    } while (uVar2 < *(uint *)(param_1 + 0x4f4));
  }
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  return;
}

