// name: FUN_10010bca8
// address: 10010bca8

void FUN_10010bca8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  
  FUN_100122fbe();
  *param_1 = &PTR_FUN_10082ffe0;
  iVar2 = (uint)(*(int *)(param_2 + 0x54) == 0) * 0x40 + 0x3c0;
  *(int *)(param_1 + 0x486) = iVar2;
  pvVar1 = operator_new(0x1fd8);
  FUN_100111580(pvVar1,param_2,iVar2,param_3);
  param_1[0x487] = pvVar1;
  *(uint *)((long)param_1 + 0x241c) = (uint)*(ushort *)((long)pvVar1 + 0x1f50);
  return;
}

