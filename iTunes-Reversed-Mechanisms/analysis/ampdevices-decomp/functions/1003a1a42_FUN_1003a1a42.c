// name: FUN_1003a1a42
// address: 1003a1a42

undefined8 FUN_1003a1a42(long param_1,ulong param_2,short *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  if ((*(byte *)(param_1 + 0xf9) & 0x20) == 0) {
    FUN_1003a1ada(param_1);
  }
  cVar1 = FUN_1001b8428(param_1 + 0xa8);
  if (cVar1 == '\0') {
    FUN_1001bb41a(param_1 + 0xa8,param_3);
  }
  else if ((*(long *)(param_1 + 0x98) != 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    FUN_1001de8ee(param_1 + 0x98,param_3);
  }
  if (((param_2 & 2) != 0) && (*param_3 == 0)) {
    uVar2 = FUN_1003a0f08(param_1,param_3);
    return uVar2;
  }
  return 0;
}

