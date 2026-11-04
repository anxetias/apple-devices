// name: FUN_100111d94
// address: 100111d94

undefined8 FUN_100111d94(long param_1,int param_2,short param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_2 == 3) {
    if ((*(char *)(param_1 + 0x8cc) != '\0') && (lVar3 = 9, *(short *)(param_1 + 0x8ce) == param_3))
    goto LAB_100111e45;
    *(undefined1 *)(param_1 + 0x948) = 0;
    lVar3 = 0x950;
    uVar1 = 1;
    lVar2 = 0x94a;
  }
  else {
    pcVar4 = (char *)(param_1 + 0x498);
    lVar3 = 0;
    do {
      if (((pcVar4[-4] != '\0') && ((bool)*pcVar4 == (param_2 == 1))) &&
         (*(short *)(pcVar4 + -2) == param_3)) goto LAB_100111e45;
      lVar3 = lVar3 + 1;
      pcVar4 = pcVar4 + 0x78;
    } while (lVar3 != 9);
    *(bool *)(param_1 + 0x948) = param_2 == 1;
    *(undefined1 *)(param_1 + 0x94a) = 1;
    *(undefined4 *)(param_1 + 0x950) = 10;
    lVar3 = 10;
    if (param_2 != 1) goto LAB_100111e45;
    *(undefined4 *)(param_1 + 0x94c) = 0xb;
    lVar3 = 0x9c4;
    lVar2 = 0x9c2;
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + lVar2) = uVar1;
  *(undefined4 *)(param_1 + lVar3) = 10;
  lVar3 = 10;
LAB_100111e45:
  *param_4 = (int)lVar3;
  return 0;
}

