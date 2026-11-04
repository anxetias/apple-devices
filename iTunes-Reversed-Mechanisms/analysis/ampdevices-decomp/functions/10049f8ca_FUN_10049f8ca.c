// name: FUN_10049f8ca
// address: 10049f8ca

ulong FUN_10049f8ca(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) << 0x20;
  uVar3 = uVar4 | 0x200000000;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 + 2;
  if (*(char *)(param_1 + 0x1d) == *(char *)(param_2 + 0x1d)) {
    uVar4 = uVar3;
  }
  uVar4 = uVar4 + (*(char *)(param_1 + 0x1c) != *(char *)(param_2 + 0x1c));
  uVar3 = uVar4 + 4;
  if (*(char *)(param_1 + 0x1e) == *(char *)(param_2 + 0x1e)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 8;
  if (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x10;
  if (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x20;
  if (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28)) {
    uVar4 = uVar3;
  }
  iVar2 = FUN_1001b9c66(param_1 + 0x30,param_2 + 0x30);
  uVar3 = uVar4 | 0x40;
  if (iVar2 == 0) {
    uVar3 = uVar4;
  }
  iVar2 = FUN_1001b9c66(param_1 + 0x40,param_2 + 0x40);
  uVar4 = uVar3 | 0x80;
  if (iVar2 == 0) {
    uVar4 = uVar3;
  }
  cVar1 = FUN_1001a85de(param_1 + 0x50,param_2 + 0x50);
  uVar3 = uVar4 | 0x100;
  if (cVar1 != '\0') {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x200;
  if (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x400;
  if (*(char *)(param_1 + 100) == *(char *)(param_2 + 100)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x800;
  if (*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68)) {
    uVar4 = uVar3;
  }
  iVar2 = FUN_1001b9c66(param_1 + 0x70,param_2 + 0x70);
  uVar3 = uVar4 | 0x1000;
  if (iVar2 == 0) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x2000;
  if (*(long *)(param_1 + 0x80) == *(long *)(param_2 + 0x80)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x4000;
  if (*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0x90)) {
    uVar3 = uVar4;
  }
  iVar2 = FUN_1001b9c66(param_1 + 0x98,param_2 + 0x98);
  uVar4 = uVar3 | 0x8000000000;
  if (iVar2 == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x2000000000;
  if (*(int *)(param_1 + 0x88) == *(int *)(param_2 + 0x88)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x800000000;
  if (*(int *)(param_1 + 0x8c) == *(int *)(param_2 + 0x8c)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x8000;
  if (*(char *)(param_1 + 0xa8) == *(char *)(param_2 + 0xa8)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x10000;
  if (*(char *)(param_1 + 0xa9) == *(char *)(param_2 + 0xa9)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x20000;
  if (*(char *)(param_1 + 0xaa) == *(char *)(param_2 + 0xaa)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x40000;
  if (*(char *)(param_1 + 0xab) == *(char *)(param_2 + 0xab)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x80000;
  if (*(char *)(param_1 + 0xac) == *(char *)(param_2 + 0xac)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x100000;
  if (*(char *)(param_1 + 0xae) == *(char *)(param_2 + 0xae)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x10000000000;
  if (*(char *)(param_1 + 0xaf) == *(char *)(param_2 + 0xaf)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x200000;
  if (*(char *)(param_1 + 0xb0) == *(char *)(param_2 + 0xb0)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x1000000000;
  if (*(int *)(param_1 + 0xc0) == *(int *)(param_2 + 0xc0)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x400000;
  if (*(int *)(param_1 + 0xc4) == *(int *)(param_2 + 0xc4)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x800000;
  if (*(int *)(param_1 + 200) == *(int *)(param_2 + 200)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x1000000;
  if (*(long *)(param_1 + 0xb8) == *(long *)(param_2 + 0xb8)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x2000000;
  if (*(char *)(param_1 + 0xcc) == *(char *)(param_2 + 0xcc)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x4000000;
  if (*(char *)(param_1 + 0xcd) == *(char *)(param_2 + 0xcd)) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x8000000;
  if (*(char *)(param_1 + 0xce) == *(char *)(param_2 + 0xce)) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3 | 0x10000000;
  if (*(char *)(param_1 + 0xcf) == *(char *)(param_2 + 0xcf)) {
    uVar4 = uVar3;
  }
  cVar1 = FUN_1001a85de(param_1 + 0xd0,param_2 + 0xd0);
  uVar3 = uVar4 | 0x20000000;
  if (cVar1 != '\0') {
    uVar3 = uVar4;
  }
  iVar2 = FUN_1001b9c66(param_1 + 0xe0,param_2 + 0xe0);
  uVar4 = uVar3 | 0x40000000;
  if (iVar2 == 0) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x80000000;
  if (*(char *)(param_1 + 0xad) == *(char *)(param_2 + 0xad)) {
    uVar3 = uVar4;
  }
  cVar1 = FUN_1001a85de(param_1 + 0xf0,param_2 + 0xf0);
  uVar4 = uVar3 | 0x400000000;
  if (cVar1 != '\0') {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 0x4000000000;
  if (*(long *)(param_1 + 0x100) == *(long *)(param_2 + 0x100)) {
    uVar3 = uVar4;
  }
  return uVar3;
}

