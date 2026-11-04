// name: FUN_1002e725a
// address: 1002e725a

void FUN_1002e725a(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_1001a85d4(lVar1 + -0x18);
    FUN_1001ab006(lVar1 + -0x30);
    lVar1 = lVar1 + -0x30;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

