// name: FUN_1003a0f08
// address: 1003a0f08

undefined8 FUN_1003a0f08(long param_1,short *param_2)

{
  long lVar1;
  ulong uVar2;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x14) == 1) {
    if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(param_1);
    }
    lVar1 = *(long *)(param_1 + 0x60);
    if ((lVar1 != 0) && (uVar2 = FUN_100474dd0(lVar1,0), (uVar2 & 0xc62) != 0)) {
      FUN_100476928(lVar1,param_2);
    }
    if (*param_2 != 0) {
      return 2;
    }
  }
  FUN_1001c34b7(0x7f0002,param_2);
  return 6;
}

