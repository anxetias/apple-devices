// name: FUN_1001c4aa2
// address: 1001c4aa2

bool FUN_1001c4aa2(void)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  if (DAT_1008a2250 == '\0') {
    DAT_1008a2250 = '\x01';
    lVar2 = _dlopen("/usr/lib/libScreenReader.dylib",6);
    if (lVar2 != 0) {
      DAT_1008a2248 = (code *)_dlsym(lVar2,"_ScreenReaderIsRunning");
    }
  }
  if (DAT_1008a2248 == (code *)0x0) {
    bVar3 = false;
  }
  else {
    cVar1 = (*DAT_1008a2248)();
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}

