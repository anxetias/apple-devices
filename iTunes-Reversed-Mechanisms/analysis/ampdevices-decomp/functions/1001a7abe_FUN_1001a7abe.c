// name: FUN_1001a7abe
// address: 1001a7abe

void FUN_1001a7abe(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_2 = 0;
  return;
}

