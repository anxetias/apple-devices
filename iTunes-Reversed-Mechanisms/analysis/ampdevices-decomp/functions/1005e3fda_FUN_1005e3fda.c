// name: FUN_1005e3fda
// address: 1005e3fda

void FUN_1005e3fda(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1005e401a();
  while( true ) {
    if (lVar1 == 0) {
      FUN_1005e401a(param_1);
      return;
    }
    if (*(int *)(param_1 + 0xf0) == *(int *)(lVar1 + 0xdc)) break;
    lVar1 = FUN_1005e3e6c();
  }
  return;
}

