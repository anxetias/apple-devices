// name: FUN_1002b447b
// address: 1002b447b

undefined8 FUN_1002b447b(undefined8 param_1,long param_2)

{
  if ((((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) ||
      (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) ||
     (*(long *)(*(long *)(param_2 + 0x10) + 0x38) == 0)) {
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1001b90b6(param_1);
  }
  return param_1;
}

