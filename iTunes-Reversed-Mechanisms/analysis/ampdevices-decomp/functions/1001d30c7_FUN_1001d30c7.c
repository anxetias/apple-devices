// name: FUN_1001d30c7
// address: 1001d30c7

int FUN_1001d30c7(undefined8 param_1)

{
  int iVar1;
  ulong in_RAX;
  int iVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffffff;
  iVar1 = FUN_1001d302b(param_1,"PRAGMA integrity_check(1)",FUN_1001d3103,(long)&uStack_18 + 7);
  iVar2 = 0x32d3;
  if ((uStack_18 & 0x100000000000000) == 0) {
    iVar2 = 0;
  }
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}

