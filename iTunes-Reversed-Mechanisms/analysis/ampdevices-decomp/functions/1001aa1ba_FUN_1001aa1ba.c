// name: FUN_1001aa1ba
// address: 1001aa1ba

long * FUN_1001aa1ba(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long local_28 [2];
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*param_2 != 0) {
    uVar1 = _CFGetAllocator();
    uVar1 = _CFDictionaryCreateMutableCopy(uVar1,0,*param_2);
    FUN_1001a8d82(local_28,uVar1,0);
    if (local_28[0] != 0) {
      *param_1 = local_28[0];
    }
    local_28[0] = 0;
    FUN_1001a8f90();
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}

