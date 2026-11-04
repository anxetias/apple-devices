// name: FUN_100108330
// address: 100108330

void FUN_100108330(void)

{
  ulong in_RAX;
  
  if (0xfff < in_RAX) {
    do {
      in_RAX = in_RAX - 0x1000;
    } while (0x1000 < in_RAX);
  }
  return;
}

