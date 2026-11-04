// name: FUN_1003ca0fa
// address: 1003ca0fa

long FUN_1003ca0fa(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 local_38 [16];
  
  lVar3 = FUN_10048bbac(*(undefined8 *)(param_1 + 0x30),0x14,0);
  if (lVar3 == 0) {
    FUN_100313e0b(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    FUN_1001b7b04(local_38,"");
    lVar3 = FUN_1003c5cfa(uVar1,0,uVar2,local_38);
    FUN_1001b7a50(local_38);
    if (((lVar3 != 0) && (*(char *)(param_1 + 0x14cda) != '\0')) &&
       (*(byte *)(lVar3 + 0x240) = *(byte *)(lVar3 + 0x240) | 0x10,
       (*(byte *)(*(long *)(param_1 + 0x30) + 0x1bb4) & 2) != 0)) {
      FUN_1004ece0d(lVar3);
    }
    FUN_1002fbbfc(*(undefined8 *)(param_1 + 0x30));
  }
  return lVar3;
}

