// name: FUN_1004c67d2
// address: 1004c67d2

undefined8 FUN_1004c67d2(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
    FUN_1001b7a5c(param_1,param_2 + 0x10);
  }
  else {
    FUN_1001b7a44(param_1);
  }
  return param_1;
}

