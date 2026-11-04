// name: FUN_1002c09ee
// address: 1002c09ee

undefined8 * FUN_1002c09ee(long *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (long *)0x0) &&
     (puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970), puVar1 != (undefined8 *)0x0))
  {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_100283e44(puVar1,*param_1,param_1[1],param_1[1] - *param_1 >> 3);
    return puVar1;
  }
  return (undefined8 *)0x0;
}

