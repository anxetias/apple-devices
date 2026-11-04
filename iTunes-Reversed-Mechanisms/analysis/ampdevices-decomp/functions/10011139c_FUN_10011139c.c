// name: FUN_10011139c
// address: 10011139c

int FUN_10011139c(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100107958(*(undefined8 *)(param_1 + 0x2438),param_1 + 0x2450);
  iVar2 = -2;
  if (iVar1 == 0) {
    *(long *)(param_1 + 0x24b0) = *(long *)(param_1 + 0x2438) + 0x1f70;
    iVar1 = (**(code **)(**(long **)(param_1 + 0x2440) + 0x78))
                      (*(long **)(param_1 + 0x2440),param_1 + 0x2450);
    iVar2 = (uint)(iVar1 == 0) * 2 + -2;
  }
  return iVar2;
}

