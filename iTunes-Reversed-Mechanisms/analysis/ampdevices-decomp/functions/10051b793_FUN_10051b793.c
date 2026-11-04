// name: FUN_10051b793
// address: 10051b793

void FUN_10051b793(void)

{
  long lVar1;
  
  for (lVar1 = FUN_1002f930c(); lVar1 != 0; lVar1 = FUN_1002f9451(lVar1)) {
    if ((*(uint *)(lVar1 + 0xd4) & 0x10) != 0) {
      *(uint *)(lVar1 + 0xd4) = *(uint *)(lVar1 + 0xd4) & 0xff7fffef | 0x800000;
    }
  }
  return;
}

