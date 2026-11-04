// name: FUN_1005400aa
// address: 1005400aa

undefined2 FUN_1005400aa(long *param_1)

{
  undefined2 uVar1;
  
  if (*(char *)((long)param_1 + 0x4c4) == '\0') {
    *(undefined1 *)((long)param_1 + 0x4c4) = 1;
    uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1);
    *(undefined2 *)((long)param_1 + 0x4c6) = uVar1;
  }
  else {
    uVar1 = *(undefined2 *)((long)param_1 + 0x4c6);
  }
  return uVar1;
}

