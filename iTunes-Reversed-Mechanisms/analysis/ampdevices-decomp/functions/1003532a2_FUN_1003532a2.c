// name: FUN_1003532a2
// address: 1003532a2

void FUN_1003532a2(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  if ((*(char *)(param_2 + 0x14) != '\0') && (*(char *)(param_2 + 0x14) != '\x05')) {
    lVar1 = FUN_10049368a(param_1);
    lVar3 = param_1;
    if ((lVar1 == 0 || lVar1 == param_1) ||
       (lVar2 = FUN_100352c96(lVar1,param_2 + 0x14,0), lVar3 = lVar1, lVar2 == 0)) {
      FUN_100353471(param_2,lVar3);
      lVar2 = 0;
    }
    else {
      _memcpy((void *)(param_2 + 0x20),(void *)(lVar2 + 0x20),0xaf4);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(lVar2 + 0x1c);
      *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar2 + 0x1d);
    }
  }
  FUN_100352633(param_1);
  FUN_100352999(lVar2);
  return;
}

