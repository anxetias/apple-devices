// name: FUN_1001bff0c
// address: 1001bff0c

void FUN_1001bff0c(void)

{
  if (DAT_10089fb80 != (long *)0x0) {
    (**(code **)(*DAT_10089fb80 + 8))();
  }
  DAT_10089fb80 = (long *)0x0;
  if (DAT_10089fb88 != (long *)0x0) {
    (**(code **)(*DAT_10089fb88 + 8))();
  }
  DAT_10089fb88 = (long *)0x0;
  return;
}

