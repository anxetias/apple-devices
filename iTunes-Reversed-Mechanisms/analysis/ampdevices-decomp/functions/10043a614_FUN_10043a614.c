// name: FUN_10043a614
// address: 10043a614

undefined8 FUN_10043a614(long param_1,long *param_2)

{
  if (*(int *)(*param_2 + 0xc) == 0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(*param_2 + 0xc) = 0;
  }
  return 0;
}

