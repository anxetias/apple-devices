// name: FUN_1001aa172
// address: 1001aa172

undefined8 * FUN_1001aa172(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    uVar1 = _CFGetAllocator();
    uVar1 = _CFDictionaryCreateCopy(uVar1,*param_2);
    FUN_1001a8d82(param_1,uVar1,0);
  }
  return param_1;
}

