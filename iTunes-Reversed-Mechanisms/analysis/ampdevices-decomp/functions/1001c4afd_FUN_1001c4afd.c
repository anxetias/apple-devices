// name: FUN_1001c4afd
// address: 1001c4afd

void FUN_1001c4afd(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1008a2258 != 0) {
    return;
  }
  DAT_1008a2258 =
       FUN_100171409(DAT_1008c4d98,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                     PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (DAT_1008a2258 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7ad0(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

