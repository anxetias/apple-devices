// name: FUN_10018210f
// address: 10018210f

void FUN_10018210f(int param_1,char param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100181923();
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x14) == param_1) break;
    lVar2 = FUN_100181973(lVar2);
  }
  if (*(char *)(lVar2 + 0x685) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100689640(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined1 *)(lVar2 + 0x680) = 0;
  if (param_2 == '\0') {
    return;
  }
  FUN_100181c45();
  return;
}

