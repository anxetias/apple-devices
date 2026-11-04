// name: FUN_100182195
// address: 100182195

void FUN_100182195(void)

{
  long lVar1;
  
  if (DAT_1008c4dc0 != '\0') {
    return;
  }
  for (lVar1 = FUN_100181923(); lVar1 != 0; lVar1 = FUN_100181973(lVar1)) {
    *(undefined1 *)(lVar1 + 0x687) = 1;
  }
  DAT_1008c4dc0 = 1;
  FUN_1001821cb();
  return;
}

