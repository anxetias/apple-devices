// name: FUN_10036a5a1
// address: 10036a5a1

bool FUN_10036a5a1(void)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  lVar1 = FUN_1002796f8(1,0);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1c) == '\x02') {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      lVar1 = FUN_1002796f8(1,0);
      if (lVar1 != 0) {
        bVar2 = *(char *)(lVar1 + 0x1c) == '\x01';
      }
    }
  }
  return bVar2;
}

