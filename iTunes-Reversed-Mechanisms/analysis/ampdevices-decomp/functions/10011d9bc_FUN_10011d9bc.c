// name: FUN_10011d9bc
// address: 10011d9bc

undefined8 FUN_10011d9bc(int param_1)

{
  long lVar1;
  
  lVar1 = 8;
  do {
    if (*(int *)(&UNK_100835e68 + lVar1) == param_1) {
      return *(undefined8 *)((long)&DAT_100835e70 + lVar1);
    }
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x38);
  return 0;
}

