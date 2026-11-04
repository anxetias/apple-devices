// name: FUN_1005a9612
// address: 1005a9612

void FUN_1005a9612(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  if (((param_3 != 0) && (iVar2 = FUN_1005a2140(param_1 + 0x1660), iVar2 == 1)) &&
     (iVar2 = FUN_1005a9692(param_1,param_2,param_3), iVar2 == 0)) {
    lVar1 = FUN_1005b0998(param_1 + 0x1678,param_2,param_3);
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  return;
}

