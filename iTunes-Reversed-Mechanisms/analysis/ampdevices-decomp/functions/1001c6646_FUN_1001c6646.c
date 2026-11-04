// name: FUN_1001c6646
// address: 1001c6646

bool FUN_1001c6646(int *param_1)

{
  bool bVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4d526376)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (*(long *)(param_1 + 10) == 0) {
      bVar1 = *(long *)(param_1 + 0xc) != 0;
    }
  }
  return bVar1;
}

