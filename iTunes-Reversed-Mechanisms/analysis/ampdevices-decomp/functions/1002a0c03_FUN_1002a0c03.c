// name: FUN_1002a0c03
// address: 1002a0c03

void FUN_1002a0c03(uint *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  void *pvVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  code *local_40;
  uint *local_38;
  
  puVar1 = PTR_nothrow_10082c970;
  uVar5 = (ulong)*param_1;
  pvVar3 = (void *)0x0;
  local_40 = FUN_1002a310b;
  uVar6 = 0;
  puVar4 = param_1 + 2;
  uVar2 = uVar5;
  if (0x80 < uVar5) {
    do {
      local_38 = puVar4;
      uVar6 = uVar2;
      pvVar3 = operator_new(uVar6 * 8,(nothrow_t *)puVar1);
      puVar4 = local_38;
      if (pvVar3 != (void *)0x0) goto LAB_1002a0c80;
      uVar2 = uVar6 >> 1;
    } while (1 < uVar6);
    pvVar3 = (void *)0x0;
    uVar6 = 0;
  }
LAB_1002a0c80:
  FUN_1002a3128(puVar4,param_1 + uVar5 * 2 + 2,&local_40,uVar5,pvVar3,uVar6);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  return;
}

