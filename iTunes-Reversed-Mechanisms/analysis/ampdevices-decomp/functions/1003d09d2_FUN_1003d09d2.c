// name: FUN_1003d09d2
// address: 1003d09d2

void FUN_1003d09d2(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  if ((param_1 & 1) == 0) {
    if (param_2 == (void *)0x0) {
      return;
    }
  }
  else {
    pvVar1 = *(void **)((long)param_2 + 0x18);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)param_2 + 0x20) = pvVar1;
      operator_delete(pvVar1);
    }
  }
  operator_delete(param_2);
  return;
}

