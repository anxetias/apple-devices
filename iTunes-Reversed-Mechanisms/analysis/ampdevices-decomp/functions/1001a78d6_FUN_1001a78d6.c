// name: FUN_1001a78d6
// address: 1001a78d6

undefined8 * FUN_1001a78d6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}

