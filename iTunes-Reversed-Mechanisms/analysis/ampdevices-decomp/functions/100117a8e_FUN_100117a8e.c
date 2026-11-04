// name: FUN_100117a8e
// address: 100117a8e

ulong FUN_100117a8e(uint *param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0xd;
  puVar1 = (uint *)&DAT_1007041b0;
  do {
    uVar3 = uVar2 >> 1;
    uVar4 = ~uVar3 + uVar2;
    uVar2 = uVar3;
    if (*param_1 < puVar1[uVar3]) {
      puVar1 = puVar1 + uVar3 + 1;
      uVar2 = uVar4;
    }
  } while (uVar2 != 0);
  uVar2 = 0xf;
  if (*puVar1 == *param_1) {
    uVar2 = (ulong)(puVar1 + -0x401c106c) >> 2 & 0xffffffff;
  }
  return uVar2;
}

