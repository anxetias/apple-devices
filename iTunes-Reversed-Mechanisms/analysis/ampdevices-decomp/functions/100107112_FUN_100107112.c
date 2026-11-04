// name: FUN_100107112
// address: 100107112

void FUN_100107112(undefined8 *param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_10082fd50;
  param_1[0x481] = 0;
  param_1[0x482] = 0;
  *(float *)(param_1 + 0x484) = (float)*(uint *)(param_2 + 0x2c);
  ___bzero(param_1 + 1,0x2400);
  param_1[0x482] = param_1 + 1;
  param_1[0x481] = 0x240000000000;
  iVar2 = (uint)(*(int *)(param_2 + 0x54) == 0) * 0x40 + 0x3c0;
  *(int *)(param_1 + 0x483) = iVar2;
  pvVar1 = operator_new(0x1f60);
  FUN_100117ca6(pvVar1,param_2,iVar2,param_3);
  param_1[0x485] = pvVar1;
  *(uint *)((long)param_1 + 0x241c) = (uint)*(ushort *)((long)pvVar1 + 0x1f50);
  return;
}

