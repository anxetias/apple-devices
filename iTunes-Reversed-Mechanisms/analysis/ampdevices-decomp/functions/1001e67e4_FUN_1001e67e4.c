// name: FUN_1001e67e4
// address: 1001e67e4

void FUN_1001e67e4(long param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  
  puVar2 = PTR___DefaultRuneLocale_10082cae8;
  uVar5 = 0;
  do {
    uVar6 = (ulong)uVar5;
    cVar1 = *(char *)(param_1 + uVar6);
    if (cVar1 < '\0') {
      uVar3 = ___maskrune((int)cVar1,0x4000);
    }
    else {
      uVar3 = *(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x4000;
    }
    uVar5 = uVar5 + 1;
  } while (uVar3 != 0);
  pcVar7 = (char *)(uVar6 + param_1);
  sVar4 = _strlen(pcVar7);
  if (uVar5 != 1) {
    FUN_1001c631b(pcVar7,param_1,sVar4 + 1);
  }
  for (; sVar4 != 0; sVar4 = sVar4 - 1) {
    cVar1 = *(char *)(param_1 + -1 + sVar4);
    if (cVar1 < '\0') {
      uVar5 = ___maskrune((int)cVar1,0x4000);
    }
    else {
      uVar5 = *(uint *)(puVar2 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x4000;
    }
    if (uVar5 == 0) goto LAB_1001e6889;
  }
  sVar4 = 0;
LAB_1001e6889:
  *(undefined1 *)(param_1 + sVar4) = 0;
  return;
}

