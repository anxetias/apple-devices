// name: FUN_10031a32d
// address: 10031a32d

void FUN_10031a32d(void)

{
  long lVar1;
  
  for (lVar1 = FUN_1002f9fc5(); lVar1 != 0; lVar1 = FUN_1002fa118(lVar1)) {
    if ((*(int *)(lVar1 + 0x3c) == 0x46494c45) && (*(char *)(lVar1 + 0x44) == '\x02')) {
      *(undefined1 *)(lVar1 + 0x44) = 3;
    }
  }
  return;
}

