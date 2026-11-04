// name: FUN_10031a35a
// address: 10031a35a

void FUN_10031a35a(undefined8 param_1,int param_2)

{
  long lVar1;
  
  for (lVar1 = FUN_1002f9fc5(); lVar1 != 0; lVar1 = FUN_1002fa118(lVar1)) {
    if (((*(int *)(lVar1 + 0x3c) == 0x46494c45) && (*(char *)(lVar1 + 0x44) == '\x01')) &&
       ((param_2 == 0 || (*(int *)(*(long *)(lVar1 + 0x80) + 0x430) == param_2)))) {
      FUN_1002b765a(lVar1);
    }
  }
  return;
}

