// name: FUN_10036a52f
// address: 10036a52f

bool FUN_10036a52f(void)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar1 = FUN_1002796f8(1,0);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1c) == '\x02') {
      bVar3 = false;
    }
    else {
      bVar3 = false;
      lVar1 = FUN_1002796f8(1,0);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x1c) == '\x01') {
          uVar2 = FUN_1003070df();
          lVar1 = FUN_10048bbac(uVar2,0x1a,0);
          if (lVar1 == 0) {
            return false;
          }
        }
        bVar3 = *(char *)(DAT_1008c76a0 + 0x13a3) != '\0';
      }
    }
  }
  return bVar3;
}

