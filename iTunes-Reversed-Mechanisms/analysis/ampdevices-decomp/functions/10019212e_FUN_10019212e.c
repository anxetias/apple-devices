// name: FUN_10019212e
// address: 10019212e

undefined8 FUN_10019212e(char *param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  *param_3 = 0x504f5358;
  *(undefined2 *)(param_3 + 1) = 0;
  param_3[2] = 0;
  *(undefined ***)(param_3 + 4) = &PTR_FUN_10083c2a8;
  param_3[0x107] = 0;
  *(undefined1 *)(param_3 + 6) = 0;
  pcVar3 = (char *)((long)param_3 + 0x19);
  sVar2 = _strlcpy(pcVar3,param_1,0x400);
  uVar4 = 0x3f;
  if (sVar2 < 0x400) {
    sVar2 = _strlcat(pcVar3,"/",0x400);
    if (sVar2 < 0x400) {
      sVar2 = _strlcat(pcVar3,param_2,0x400);
      if (sVar2 < 0x400) {
        sVar2 = _strlen(pcVar3);
        uVar4 = 0;
        if ((sVar2 != 1) && (*(char *)((long)param_3 + sVar2 + 0x18) == '/')) {
          pcVar3 = pcVar3 + sVar2;
          do {
            pcVar3[-1] = '\0';
            pcVar1 = pcVar3 + -2;
            pcVar3 = pcVar3 + -1;
          } while (*pcVar1 == '/');
        }
      }
    }
  }
  return uVar4;
}

