// name: FUN_10035194c
// address: 10035194c

void FUN_10035194c(long param_1,long param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  iVar2 = FUN_10031fa8a(param_2);
  if (iVar2 == 1) {
    *(undefined2 *)(param_2 + 4) = 0;
    if ((param_1 != 0) && ((*(byte *)(param_1 + 0x298) & 2) != 0)) {
      *(undefined1 *)(param_2 + 6) = 0;
    }
LAB_1003519ea:
    bVar1 = true;
    sVar5 = 0;
  }
  else {
    bVar1 = true;
    sVar5 = 0;
    if (iVar2 < 0x82) {
      if (iVar2 == 0x19) {
        *(undefined1 *)(param_2 + 4) = 0;
        goto LAB_1003519ea;
      }
      if (iVar2 == 0x7d) {
        bVar1 = false;
        *(undefined1 *)(param_2 + 4) = 0;
        *(undefined1 *)(param_2 + 7) = 0;
        *(undefined2 *)(param_2 + 8) = 0xf;
        sVar5 = 0xf;
      }
      else if (iVar2 == 0x7e) {
        *(undefined4 *)(param_2 + 4) = 0x10001;
        goto LAB_1003519ea;
      }
    }
    else if (((iVar2 == 0x82) || (iVar2 == 0x9a)) || (iVar2 == 0x9c)) {
      *(undefined1 *)(param_2 + 4) = 0;
      *(undefined2 *)(param_2 + 8) = 0x1b;
      sVar5 = 0x1b;
      bVar1 = false;
    }
  }
  sVar6 = *(short *)(param_2 + 8);
  if (sVar6 == 0) {
    lVar4 = FUN_100352791();
    if (lVar4 == 0) {
      sVar5 = 100;
    }
    else {
      sVar5 = *(short *)(lVar4 + 2);
      if ((iVar2 != 0x71) && (iVar7 = *(int *)(lVar4 + 8), iVar7 != 0)) {
        psVar3 = (short *)(lVar4 + 0x12);
        do {
          if (*(int *)(psVar3 + -3) == iVar2) {
            sVar5 = *psVar3;
            break;
          }
          psVar3 = psVar3 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  else {
    if (bVar1) {
      psVar3 = (short *)FUN_100352791();
      if (psVar3 == (short *)0x0) {
        sVar5 = 0x28;
      }
      else {
        sVar5 = *psVar3;
        if ((iVar2 != 0x71) && (iVar7 = *(int *)(psVar3 + 4), iVar7 != 0)) {
          psVar3 = psVar3 + 8;
          do {
            if (*(int *)(psVar3 + -2) == iVar2) {
              sVar5 = *psVar3;
              break;
            }
            psVar3 = psVar3 + 6;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      sVar6 = *(short *)(param_2 + 8);
    }
    if (sVar5 <= sVar6) goto LAB_100351a92;
  }
  *(short *)(param_2 + 8) = sVar5;
LAB_100351a92:
  if (param_1 != 0) {
    if (((*(ushort *)(param_1 + 0x10) & 0xfffe) == 10) && ((param_3 == '\x05' || (param_3 == '\0')))
       ) {
      if (iVar2 == 1) {
        *(undefined1 *)(param_2 + 7) = 0;
      }
      else if (iVar2 == 0x22) {
        return;
      }
      *(undefined1 *)(param_2 + 6) = 0;
    }
    if ((iVar2 == 1) && (*(int *)(param_1 + 0x268) == 0x63642020)) {
      *(undefined1 *)(param_2 + 6) = 1;
    }
  }
  return;
}

