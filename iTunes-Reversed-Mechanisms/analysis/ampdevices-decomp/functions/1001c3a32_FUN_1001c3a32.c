// name: FUN_1001c3a32
// address: 1001c3a32

void FUN_1001c3a32(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = _isatty(0);
  if ((iVar2 == 1) || (DAT_1008a2210 == '\x01')) {
    *(undefined2 *)(param_1 + 1) = 0x101;
    cVar1 = FUN_100178342();
    if (cVar1 == '\0') {
      cVar1 = FUN_1001cd44e("log-timestamps",1,0);
      if (cVar1 != '\0') {
        *param_1 = 1;
      }
    }
  }
  return;
}

