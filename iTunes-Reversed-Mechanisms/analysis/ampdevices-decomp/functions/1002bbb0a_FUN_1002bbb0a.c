// name: FUN_1002bbb0a
// address: 1002bbb0a

void FUN_1002bbb0a(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x48) {
    FUN_1001b7a50(lVar1 + -0x28);
    FUN_1001b7a50(lVar1 + -0x38);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

