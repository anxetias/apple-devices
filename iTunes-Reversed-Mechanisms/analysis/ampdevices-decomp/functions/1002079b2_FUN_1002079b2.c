// name: FUN_1002079b2
// address: 1002079b2

void FUN_1002079b2(void)

{
  char cVar1;
  
  cVar1 = FUN_1001cd44e("log-idle",0,0);
  if (cVar1 != '\0') {
    DAT_1008a2b70 = FUN_1001cc24a("com.apple.amp.library","idle");
  }
  return;
}

