// name: FUN_1001ebbad
// address: 1001ebbad

undefined1 FUN_1001ebbad(void)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = _CGSessionCopyCurrentDictionary();
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_100167dd2(lVar2,&cf_kCGSSessionOnConsoleKey,0);
    FUN_10017060f(lVar2);
  }
  return uVar1;
}

