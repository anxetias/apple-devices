// name: FUN_1001819f6
// address: 1001819f6

ulong FUN_1001819f6(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  for (lVar3 = FUN_100181923(); lVar3 != 0; lVar3 = FUN_100181973(lVar3)) {
    if (*(char *)(lVar3 + 0x685) == '\0') {
      param_4 = CONCAT71((int7)(param_4 >> 8),*(undefined1 *)(lVar3 + 0x680));
      *(undefined1 *)(lVar3 + 0x681) = *(undefined1 *)(lVar3 + 0x680);
      *(undefined1 *)(lVar3 + 0x680) = 0;
    }
  }
  lVar3 = *param_1;
  if (lVar3 == param_1[1]) {
    uVar6 = 0;
  }
  else {
    uVar5 = 0;
    do {
      lVar4 = FUN_100181923();
      if (lVar4 != 0) {
        do {
          if (((*(ushort *)(lVar4 + 0x43e) >> 2 & 1) == (ushort)*(byte *)(lVar3 + 0x10)) &&
             (cVar1 = FUN_10017ec13(lVar4 + 0x18,lVar3 + 0x218), cVar1 != '\0')) {
            *(undefined1 *)(lVar4 + 0x680) = 1;
            cVar1 = FUN_1001e3edc(lVar3 + 0x14,lVar4 + 0x480,0);
            if (cVar1 != '\0') goto LAB_100181aba;
            *(undefined1 *)(lVar4 + 0x683) = 1;
            FUN_1001e1c39(lVar3 + 0x14,lVar4 + 0x480);
            goto LAB_100181ab8;
          }
          lVar4 = FUN_100181973(lVar4);
        } while (lVar4 != 0);
      }
      iVar2 = FUN_1001ea5dc();
      FUN_100181b5d(lVar3 + 0x218,iVar2 + 1000,0,0,0);
LAB_100181ab8:
      uVar5 = 1;
LAB_100181aba:
      lVar3 = lVar3 + 0x648;
    } while (lVar3 != param_1[1]);
    param_4 = 0;
    uVar6 = uVar5;
    if (uVar5 != 0) goto LAB_100181b49;
  }
  for (lVar3 = FUN_100181923();
      ((uVar5 = uVar6, lVar3 != 0 &&
       (param_4 = CONCAT71((int7)(param_4 >> 8),1), uVar5 = param_4,
       *(char *)(lVar3 + 0x682) == '\0')) &&
      ((*(char *)(lVar3 + 0x680) == *(char *)(lVar3 + 0x681) || (*(char *)(lVar3 + 0x685) != '\0')))
      ); lVar3 = FUN_100181973(lVar3)) {
  }
LAB_100181b49:
  return uVar5 & 0xffffff01;
}

