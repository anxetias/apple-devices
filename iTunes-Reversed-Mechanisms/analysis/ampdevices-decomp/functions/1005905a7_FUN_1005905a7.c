// name: FUN_1005905a7
// address: 1005905a7

undefined1
FUN_1005905a7(int param_1,undefined8 param_2,char param_3,byte param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined1 *param_8,byte *param_9)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (byte *)0x0) {
    *param_9 = 0;
  }
  if ((*(short *)(param_6 + 0x38) < 0) ||
     ((iVar2 = FUN_1001e21dd(param_7), iVar2 == 0 && (iVar2 = *(int *)(param_6 + 0x30), iVar2 == 0))
     )) {
    return 0;
  }
  pcVar3 = " GPJGEPJ PMB FIG FITFFIT GNP DSP IGS 2PJTCIP TCP";
  if (param_1 == 0x69545620) {
    pcVar3 = " GPJGEPJ PMB FIG FITFFIT GNP 2PJTCIP TCP";
  }
  iVar4 = *(int *)pcVar3;
  do {
    pcVar3 = (char *)((long)pcVar3 + 4);
    if (iVar4 == iVar2) {
      return 1;
    }
    iVar4 = *(int *)pcVar3;
  } while (iVar4 != 0);
  if ((param_3 != '\0') && ((iVar2 == 0x48454946 || (iVar2 == 0x48454943)))) {
    if (param_8 == (undefined1 *)0x0) {
      return 1;
    }
    *param_8 = 1;
    return 1;
  }
  param_4 = iVar2 == 0x41414520 & param_4;
  if (param_9 != (byte *)0x0) {
    *param_9 = param_4;
  }
  if (param_4 != 0) {
    return 1;
  }
  uVar1 = FUN_100590118(iVar2);
  return uVar1;
}

