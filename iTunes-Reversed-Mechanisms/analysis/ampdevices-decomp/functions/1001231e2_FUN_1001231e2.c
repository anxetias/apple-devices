// name: FUN_1001231e2
// address: 1001231e2

undefined8 FUN_1001231e2(long param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if (param_3 < 0x2401) {
    *(undefined4 *)(param_1 + 0x2408) = 0;
    *(uint *)(param_1 + 0x240c) = param_3;
    _memcpy(*(void **)(param_1 + 0x2410),param_2,(ulong)param_3);
    uVar1 = 0;
  }
  return uVar1;
}

