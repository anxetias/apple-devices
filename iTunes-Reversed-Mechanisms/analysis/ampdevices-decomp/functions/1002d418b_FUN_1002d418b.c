// name: FUN_1002d418b
// address: 1002d418b

void FUN_1002d418b(long param_1,int param_2,undefined1 *param_3)

{
  long lVar1;
  
  if (param_2 == 0x636f6e66) {
    lVar1 = 0x42;
  }
  else {
    if (param_2 != 0x6469736b) {
      return;
    }
    lVar1 = 0x43;
  }
  *param_3 = *(undefined1 *)(param_1 + lVar1);
  return;
}

