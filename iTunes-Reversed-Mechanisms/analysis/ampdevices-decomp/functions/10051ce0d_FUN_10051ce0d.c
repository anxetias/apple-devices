// name: FUN_10051ce0d
// address: 10051ce0d

void FUN_10051ce0d(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_1004e0c3f(param_1,1);
  lVar3 = FUN_10048bbac(uVar2,10,0);
  if (lVar3 != 0) {
    for (lVar3 = *(long *)(*(long *)(lVar3 + 0x78) + 8); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)
        ) {
      if ((*(long *)(lVar3 + 8) != 0) && ((*(byte *)(*(long *)(lVar3 + 8) + 0xc5) & 4) != 0)) {
        cVar1 = FUN_1002ba9ee(lVar3,*(undefined1 *)(param_1 + 0x346),0,0);
        if (cVar1 != '\0') {
          cVar1 = FUN_1002baca8(lVar3);
          if (cVar1 == param_3) {
            lVar4 = FUN_1002ba359(lVar3);
            if (lVar4 != 0) {
              FUN_1002c0f3a(param_2,lVar4);
            }
          }
        }
      }
    }
  }
  return;
}

