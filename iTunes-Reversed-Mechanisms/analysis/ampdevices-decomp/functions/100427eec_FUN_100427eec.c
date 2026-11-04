// name: FUN_100427eec
// address: 100427eec

bool FUN_100427eec(byte *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  bVar1 = *param_1;
  cVar2 = FUN_100427e21(param_1 + 1);
  if (cVar2 != '\0') {
    puVar5 = (ushort *)(param_1 + 4);
    if (bVar1 == 0) {
LAB_100427f9c:
      return (byte)*puVar5 == 0;
    }
    if (bVar1 < 3) {
      uVar3 = param_2 - 4 >> 1;
      if ((1 < param_2 - 4 && bVar1 == 1) &&
         ((uVar4 = *puVar5 << 8 | *puVar5 >> 8, uVar4 == 0xfffe || (uVar4 == 0xfeff)))) {
        puVar5 = (ushort *)(param_1 + 6);
        uVar3 = uVar3 - 1;
      }
      if (uVar3 != 0) {
        return *puVar5 == 0;
      }
    }
    else if (bVar1 == 3) {
      if ((((6 < param_2) && ((byte)*puVar5 == 0xef)) && (param_1[5] == 0xbb)) &&
         (param_1[6] == 0xbf)) {
        if (param_2 == 7) {
          return false;
        }
        puVar5 = (ushort *)(param_1 + 7);
      }
      goto LAB_100427f9c;
    }
  }
  return false;
}

