// name: FUN_100271d6f
// address: 100271d6f

bool FUN_100271d6f(long param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (param_2 != 0 && param_1 != 0) {
    if ((((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
         (*(char *)(param_1 + 1) == *(char *)(param_2 + 1))) &&
        (*(char *)(param_1 + 2) == *(char *)(param_2 + 2))) &&
       (*(char *)(param_1 + 5) == *(char *)(param_2 + 5))) {
      bVar1 = *(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20);
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

