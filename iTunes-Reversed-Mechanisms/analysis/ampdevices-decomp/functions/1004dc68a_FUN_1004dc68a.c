// name: FUN_1004dc68a
// address: 1004dc68a

undefined8 FUN_1004dc68a(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  plVar1 = (long *)*param_2;
  lVar2 = *plVar1;
  if (((*(byte *)(lVar2 + 0x298) & 1) == 0) || (*(char *)(lVar2 + 0x2a0) != '\x01')) {
    cVar3 = FUN_1002e86fc(lVar2,0,0x6370636e);
    if (cVar3 != '\0') {
      FUN_10057e98c(*(undefined8 *)(param_1 + 8),*plVar1);
    }
  }
  return 0;
}

