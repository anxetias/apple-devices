// name: FUN_10018dce1
// address: 10018dce1

undefined8 FUN_10018dce1(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  *param_2 = 0x504f5358;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  *(undefined ***)(param_2 + 4) = &PTR_FUN_10083c2a8;
  param_2[0x107] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  pcVar4 = (char *)((long)param_2 + 0x19);
  sVar2 = _strlcpy(pcVar4,param_1,0x400);
  uVar3 = 0x3f;
  if (sVar2 < 0x400) {
    sVar2 = _strlen(pcVar4);
    if ((sVar2 != 1) && (*(char *)((long)param_2 + sVar2 + 0x18) == '/')) {
      pcVar4 = pcVar4 + sVar2;
      do {
        pcVar4[-1] = '\0';
        pcVar1 = pcVar4 + -2;
        pcVar4 = pcVar4 + -1;
      } while (*pcVar1 == '/');
    }
    uVar3 = 0;
  }
  return uVar3;
}

