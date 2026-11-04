// name: FUN_100117af2
// address: 100117af2

ulong FUN_100117af2(uint *param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0xc;
  puVar1 = (uint *)&DAT_1007041f0;
  do {
    uVar3 = uVar2 >> 1;
    uVar4 = ~uVar3 + uVar2;
    uVar2 = uVar3;
    if (*param_1 < puVar1[uVar3]) {
      puVar1 = puVar1 + uVar3 + 1;
      uVar2 = uVar4;
    }
  } while (uVar2 != 0);
  return (ulong)(puVar1 + -0x401c107c) >> 2;
}

