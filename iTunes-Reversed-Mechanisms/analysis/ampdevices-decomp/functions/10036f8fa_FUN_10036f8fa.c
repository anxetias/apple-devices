// name: FUN_10036f8fa
// address: 10036f8fa

undefined8 * FUN_10036f8fa(int param_1)

{
  undefined8 *puVar1;
  
  FUN_1001e9de0(&DAT_1008bddd0);
  puVar1 = &DAT_1008bde80;
  do {
    puVar1 = (undefined8 *)*puVar1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_10036f92b;
  } while (*(int *)(puVar1 + 0x86) != param_1);
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
LAB_10036f92b:
  FUN_1001e9eb9(&DAT_1008bddd0);
  return puVar1;
}

