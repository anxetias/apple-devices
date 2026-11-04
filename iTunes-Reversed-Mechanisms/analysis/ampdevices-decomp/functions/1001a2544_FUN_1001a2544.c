// name: FUN_1001a2544
// address: 1001a2544

int FUN_1001a2544(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 220000;
  if (param_1 != 0) {
    iVar1 = param_1;
  }
  iVar1 = FUN_1001b2b3e(180000,iVar1);
  iVar2 = FUN_1001b2b48(0x62,100);
  if (iVar2 < iVar1) {
    iVar2 = FUN_1001b2b48(0x66,100);
    if (iVar1 < iVar2) {
      iVar1 = 0x10000;
    }
  }
  return iVar1;
}

