// name: FUN_1004c4570
// address: 1004c4570

undefined8 FUN_1004c4570(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((*(char *)(param_1 + 0x50a) == '\0') && (*(char *)(param_1 + 0x580) == '\0')) &&
     ((*(long *)(param_1 + 0x4f0) == 0 || (*(float *)(*(long *)(param_1 + 0x4f0) + 0x52c) <= 0.0))))
  {
    uVar1 = 0;
  }
  return uVar1;
}

