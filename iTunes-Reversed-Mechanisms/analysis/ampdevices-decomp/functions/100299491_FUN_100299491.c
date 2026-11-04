// name: FUN_100299491
// address: 100299491

undefined8 FUN_100299491(long param_1)

{
  long *plVar1;
  
  if (DAT_1008b5bc8 != (long *)0x0) {
    plVar1 = DAT_1008b5bc8;
    do {
      if (((int)plVar1[1] == *(int *)(param_1 + 8)) &&
         (*(int *)((long)plVar1 + 0xc) == *(int *)(param_1 + 0xc))) {
        if (((double)plVar1[2] == *(double *)(param_1 + 0x10)) &&
           (!NAN((double)plVar1[2]) && !NAN(*(double *)(param_1 + 0x10)))) {
          *(int *)(param_1 + 0x18) = (int)plVar1[3];
          return 0;
        }
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return 0xffffffd5;
}

