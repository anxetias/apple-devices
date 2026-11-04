// name: FUN_1001a7c10
// address: 1001a7c10

undefined8 * FUN_1001a7c10(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _CFGetAllocator();
    uVar1 = _CFArrayCreateCopy(uVar1,*param_2);
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}

