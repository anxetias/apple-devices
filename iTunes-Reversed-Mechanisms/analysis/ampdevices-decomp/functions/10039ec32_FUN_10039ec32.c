// name: FUN_10039ec32
// address: 10039ec32

bool FUN_10039ec32(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)*param_2 + 0x50))();
  return iVar1 == *(int *)(param_1 + 8);
}

