// name: FUN_10035ca10
// address: 10035ca10

undefined8 FUN_10035ca10(undefined8 param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  pcVar1 = _tempnam((char *)0x0,"IPVFS");
  if (pcVar1 == (char *)0x0) {
    uVar3 = 7;
  }
  else {
    pcVar2 = _strdup(pcVar1);
    *(char **)(param_2 + 0x10) = pcVar2;
    *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 0x10;
    _free(pcVar1);
  }
  return uVar3;
}

