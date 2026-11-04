// name: FUN_10018ced3
// address: 10018ced3

long FUN_10018ced3(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_100181923();
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    cVar1 = FUN_100170633(*(undefined8 *)(lVar2 + 0x688),param_1);
    if (cVar1 != '\0') break;
    if (((*(long *)(lVar2 + 0x688) == 0) && (lVar3 = _DADiskGetBSDName(param_1), lVar3 != 0)) &&
       (cVar1 = FUN_1001df957(lVar3,lVar2 + 0x440,0), cVar1 != '\0')) {
      return lVar2;
    }
    lVar2 = FUN_100181973(lVar2);
  }
  return lVar2;
}

