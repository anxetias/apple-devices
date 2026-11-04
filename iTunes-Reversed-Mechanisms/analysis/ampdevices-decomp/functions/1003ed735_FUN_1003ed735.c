// name: FUN_1003ed735
// address: 1003ed735

void FUN_1003ed735(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  code *local_40;
  long local_38;
  
  puVar1 = PTR_nothrow_10082c970;
  local_40 = FUN_1003ed7fa;
  uVar6 = param_2 - param_1 >> 3;
  pvVar4 = (void *)0x0;
  uVar5 = 0;
  uVar2 = uVar6;
  lVar3 = param_2;
  if (0x80 < (long)uVar6) {
    do {
      local_38 = lVar3;
      uVar5 = uVar2;
      pvVar4 = operator_new(uVar5 * 8,(nothrow_t *)puVar1);
      param_2 = local_38;
      if (pvVar4 != (void *)0x0) goto LAB_1003ed7b1;
      uVar2 = uVar5 >> 1;
      lVar3 = local_38;
    } while (1 < uVar5);
    pvVar4 = (void *)0x0;
    uVar5 = 0;
  }
LAB_1003ed7b1:
  FUN_100402386(param_1,param_2,&local_40,uVar6,pvVar4,uVar5);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  return;
}

