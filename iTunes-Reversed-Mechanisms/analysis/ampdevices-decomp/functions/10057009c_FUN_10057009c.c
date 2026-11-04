// name: FUN_10057009c
// address: 10057009c

undefined1 FUN_10057009c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[0x10];
  lVar2 = (**(code **)(*(long *)param_1[8] + 0x10))();
  if (lVar2 <= lVar1 + 1) {
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return *(undefined1 *)((long)param_1 + 0x74);
}

